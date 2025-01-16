SRCS			=	srcs/main.cpp \
					srcs/Animal.cpp \
					srcs/Dog.cpp \
					srcs/Cat.cpp \
					srcs/WrongAnimal.cpp \
					srcs/WrongCat.cpp \
					srcs/Brain.cpp \

OBJS			= $(SRCS:.cpp=.o)


CPP				= c++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98 -g

NAME			= burntheworld

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