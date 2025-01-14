# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 18:10:05 by yscheef           #+#    #+#              #
#    Updated: 2024/04/04 22:08:31 by yscheef          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := $(notdir $(patsubst %/,%,$(CURDIR))).out
SRCS        = src/Account.cpp src/tests.cpp`
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

$(OBJS_DIR)%.o: src/%.cpp | $(OBJS_DIR)
	@echo "Compiling $<"
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):    $(OBJS)
	@echo "Linking $(NAME)"
	@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	@echo "Cleaning object files"
	@$(RM) -r $(OBJS_DIR)

fclean:     clean
	@echo "Cleaning executable files"
	@$(RM) $(NAME)
	@echo "Cleaning files"
	@$(RM) $(OTHER_FILES)

re:         fclean all

soft: CPPFLAGS =
soft: fclean all

test: $(OBJS_DIR)
	@$(CPP) $(CPPFLAGS) src/Account.cpp src/tests.cpp -o test_executable
	@./test_executable | sed 's/\[[0-9]\{8\}_[0-9]\{6\}\] //' > temp_log.txt
	@sed 's/\[[0-9]\{8\}_[0-9]\{6\}\] //' 19920104_091532.log > temp_19920104_091532.log
	@echo "Comparing output with log file..."
	@diff temp_log.txt temp_19920104_091532.log && echo "Test Passed: No differences found" || echo "Test Failed: Differences found"
	@rm temp_log.txt temp_19920104_091532.log
	@rm test_executable

valgrind:   $(NAME)
	@$(VALGRIND) --leak-check=full --show-leak-kinds=all ./$(NAME)

leaks:      $(NAME)
	@$(MKDIR) $(OBJS_DIR)
	@$(CPP) $(CPPFLAGS) -g -o $(NAME) $(SRCS)
	@$(LEAKS) --atExit -- ./$(NAME)

.PHONY:     all clean fclean re soft test valgrind leaks
