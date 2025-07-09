# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 15:03:51 by lhojoon           #+#    #+#              #
#    Updated: 2025/06/29 15:47:44 by lhojoon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = a.out
# CPP = c++
# CFLAGS = -std=c++98 -Wall -Wextra -Werror
# DEBUG = -g

# DIR = .
# SRCS_RAW =	main.cpp Array.cpp
# SRCS = $(addprefix $(DIR)/,$(SRCS_RAW))
# OBJS = $(SRCS:cpp=o)
# INCLUDES = -I.


# all: $(NAME)
# $(NAME): $(OBJS)
# 	$(CPP) $(OBJS) $(DEBUG) -o $(NAME)
# clean:
# 	rm $(OBJS) -f
# fclean: clean
# 	rm $(NAME) -f
# re: fclean all

# %.o: %.cpp
# 	$(CPP) -c $< -o $@ $(CFLAGS) $(INCLUDES) $(DEBUG)


NAME = template

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -MMD
CFLAGS += -std=c++98

INC = -I.

OBJ_DIR = obj/

SRC_FILES = main.cpp Array.cpp

OBJ = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INC) $^ -o $@
-include $(OBJ:.o=.d)

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: re
	clear
	./$(NAME)

valg: re
	clear
	valgrind ./$(NAME)

.PHONY: all re clean fclean