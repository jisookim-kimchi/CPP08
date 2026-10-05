# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jisokim2 <jisokim2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/05 14:16:44 by jisokim2          #+#    #+#              #
#    Updated: 2026/10/05 14:16:44 by jisokim2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
CXX = c++
CXXFLAGS = -Wall -Wextra -std=c++17
SRCS = main.cpp span.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

re : clean all

fclean : clean
	rm -f $(NAME)

PHONY = all clean fclean re