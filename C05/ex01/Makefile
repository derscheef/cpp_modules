# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 18:10:05 by yscheef           #+#    #+#              #
#    Updated: 2024/05/06 18:25:45 by yscheef          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := $(notdir $(patsubst %/,%,$(CURDIR))).out

SRCS:= src/Bureaucrat.cpp src/main.cpp 

OBJS_DIR    := objs/
OBJS        := $(SRCS:src/%.cpp=$(OBJS_DIR)%.o)
OTHER_FILES := $(wildcard *.dSYM) $(wildcard *.log) $(wildcard *.txt)


CPP         := c++
CPPFLAGS    := -Wall -Wextra -Werror -std=c++98
DEBUG       := -g
RM          := rm -fr
MKDIR       := mkdir -p
VALGRIND    := valgrind
LEAKS       := leaks

all: update-sources $(OBJS_DIR) $(NAME)

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
	@echo "Cleaning executable file"
	@$(RM) $(NAME)

re: fclean all

debug_build: CPPFLAGS += $(DEBUG)
debug_build: re

soft: CPPFLAGS =
soft: re

valgrind: debug_build
	@$(VALGRIND) --leak-check=full --show-leak-kinds=all ./$(NAME)

leaks: debug_build
	@$(LEAKS) --atExit -- ./$(NAME)

update-sources:
	@#@echo "Updating SRCSin Makefile..."
	@SOURCE_FILES=$$(find ./src -type f -name '*.cpp' -print | sed 's|^\./||' | tr '\n' ' '); sed -i.tmp "/^SRCS:=/ s|:=.*|:= $$SOURCE_FILES|" Makefile
	@#@echo "Files to add: $$SOURCE_FILES";
	@rm Makefile.tmp
	
	@# Could have been 
	@# SRCS        := $(wildcard src/*.cpp)
	@# Zekao this is for you

run: all
	@clear
	@./$(NAME)

.PHONY: all clean fclean re debug_build soft valgrind leaks update-sources run
