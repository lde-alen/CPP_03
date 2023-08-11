NAME		=	scavtrap

SRCS		=	main.cpp			\
				ClapTrap.cpp		\
				ScavTrap.cpp		\

OBJS		=	$(SRCS:.cpp=.o)

HEADER		=	ClapTrap.hpp		\
				ScavTrap.hpp		\

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

