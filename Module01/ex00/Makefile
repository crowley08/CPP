SRCS			=	main.cpp \
					newZombie.cpp \
					randomChump.cpp \
					Zombie.cpp
					
OBJS			= $(SRCS:.cpp=.o)


CPP				= c++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror

NAME			= BraiiiiiiinnnzzzZ


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