# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndivjak <ndivjakstudent.42vienna.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 12:33:39 by yscheef           #+#    #+#              #
#    Updated: 2024/03/17 20:10:21 by ndivjak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = megaphone
SRCS        = $(wildcard src/*.cpp)
OBJS_DIR    = objs/
OBJS        = $(SRCS:src/%.cpp=$(OBJS_DIR)%.o)
OTHER_FILES  = $(wildcard *.dSYM) $(wildcard *.log) $(wildcard *.txt) $(wildcard *.out)

CPP         = g++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -fr
MKDIR       = mkdir -p
VALGRIND    = valgrind
LEAKS       = leaks

all:        $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	$(MKDIR) $(OBJS_DIR)

$(OBJS_DIR)%.o: src/%.cpp
	echo "Compiling $<"
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):    $(OBJS)
	echo "Linking $(NAME)"
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	echo "Cleaning object files"
	$(RM) -r $(OBJS_DIR)

fclean:     clean
	echo "Cleaning executable files"
	$(RM) $(NAME)
	echo "Cleaning files"
	$(RM) $(OTHER_FILES)

re:         fclean all

soft: CPPFLAGS =
soft: fclean all

valgrind_test:   $(NAME)
	$(VALGRIND) --leak-check=full --show-leak-kinds=all ./$(NAME) "shhhhh... I think the students are asleep..."
	$(VALGRIND) --leak-check=full --show-leak-kinds=all ./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	$(VALGRIND) --leak-check=full --show-leak-kinds=all ./$(NAME)

leaks_test:      $(NAME)
	$(MKDIR) $(OBJS_DIR)
	$(CPP) $(CPPFLAGS) -g -o $(NAME) $(SRCS)
	- $(LEAKS) --atExit -- ./$(NAME) "shhhhh... I think the students are asleep..."
	- $(LEAKS) --atExit -- ./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	- $(LEAKS) --atExit -- ./$(NAME)

test:			$(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone

.PHONY:     all clean fclean re debug soft valgrind leaks
