SRCS			=	srcs/HumanA.cpp \
					srcs/HumanB.cpp \
					srcs/main.cpp \
					srcs/Weapon.cpp \
					
OBJS			= $(SRCS:.cpp=.o)


CPP				= c++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98 -g

NAME			= unnecessary


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:			%.cpp
				$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all 

.PHONY:			all clean fclean re