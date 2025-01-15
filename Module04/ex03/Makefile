SRCS			=	srcs/main.cpp \
					srcs/AMateria.cpp \
					srcs/Character.cpp \
					srcs/Cure.cpp \
					srcs/Ice.cpp \
					srcs/ICharacter.cpp \
					srcs/IMateriaSource.cpp \
					srcs/MateriaSource.cpp \

OBJS			= $(SRCS:.cpp=.o)


CPP				= c++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98 -g

NAME			= materia

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