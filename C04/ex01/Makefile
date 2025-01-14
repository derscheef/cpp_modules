# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 18:10:05 by yscheef           #+#    #+#              #
#    Updated: 2024/04/05 14:05:36 by yscheef          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := $(notdir $(patsubst %/,%,$(CURDIR))).out
SRCS        := src/Animal.cpp src/Brain.cpp src/Cat.cpp src/Dog.cpp src/main.cpp
OBJS_DIR    := objs/
OBJS        := $(SRCS:src/%.cpp=$(OBJS_DIR)%.o)
OTHER_FILES := $(wildcard *.dSYM) $(wildcard *.log) $(wildcard *.txt) $(wildcard *.out)

CPP         := c++
CPPFLAGS    := -Wall -Wextra -Werror -std=c++98
DEBUG       := -g
RM          := rm -fr
MKDIR       := mkdir -p
VALGRIND    := valgrind
LEAKS       := leaks

all: $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	@$(MKDIR) $(OBJS_DIR)

$(OBJS_DIR)%.o: src/%.cpp
	@echo "Compiling $<"
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "Linking $(NAME)"
	@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	@echo "Cleaning object files"
	@$(RM) -r $(OBJS_DIR)
	@echo "Cleaning other files"
	@$(RM) $(OTHER_FILES)

fclean: clean
	@echo "Cleaning executable files"
	@$(RM) $(NAME)
	@echo "Cleaning files"
	@$(RM) $(OTHER_FILES)

re: fclean all

debug_build: CPPFLAGS += $(DEBUG)
debug_build: re

soft: CPPFLAGS =
soft: re

valgrind: debug_build
	@$(VALGRIND) --leak-check=full --show-leak-kinds=all ./$(NAME)

leaks: debug_build
	@$(LEAKS) --atExit -- ./$(NAME)

.PHONY: all clean fclean re debug_build soft valgrind leaks
