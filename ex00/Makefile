NAME		=	claptrap

SRCS		=	main.cpp			\
				ClapTrap.cpp		\

OBJS		=	$(SRCS:.cpp=.o)

HEADER		=	ClapTrap.hpp		\

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

$(NAME)		:	$(OBJS) $(HEADER)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all			:	$(NAME)

clean		:
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

