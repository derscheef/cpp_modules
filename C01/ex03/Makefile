# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 18:10:05 by yscheef           #+#    #+#              #
#    Updated: 2024/01/23 14:39:48 by yscheef          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := $(notdir $(patsubst %/,%,$(CURDIR)))
SRCS        = $(wildcard src/*.cpp)
OBJS_DIR    = objs/
OBJS        = $(SRCS:src/%.cpp=$(OBJS_DIR)%.o)
OTHER_FILES  = $(wildcard *.dSYM) $(wildcard *.log) $(wildcard *.txt) $(wildcard *.out)

CPP         = c++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -fr
MKDIR       = mkdir -p
VALGRIND    = valgrind
LEAKS       = leaks

all:        $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	@$(MKDIR) $(OBJS_DIR)

$(OBJS_DIR)%.o: src/%.cpp
	@echo "Compiling $<"
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):    $(OBJS)
	@echo "Linking $(NAME)"
	@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	@echo "Cleaning object files"
	@$(RM) -r $(OBJS_DIR)
	@echo "Cleaning other files"
	@$(RM) $(OTHER_FILES)

fclean:     clean
	@echo "Cleaning executable files"
	@$(RM) $(NAME)
	@echo "Cleaning files"
	@$(RM) $(OTHER_FILES)

re:         fclean all

soft: CPPFLAGS =
soft: fclean all

valgrind:   $(NAME)
	@$(VALGRIND) --leak-check=full --show-leak-kinds=all ./$(NAME)

leaks:      $(NAME)
	@$(MKDIR) $(OBJS_DIR)
	@$(CPP) $(CPPFLAGS) -g -o $(NAME) $(SRCS)
	@- $(LEAKS) --atExit -- ./$(NAME)

.PHONY:     all clean fclean re debug soft valgrind leaks
