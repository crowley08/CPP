SRCS			=	srcs/main.cpp \
					srcs/AAnimal.cpp \
					srcs/Dog.cpp \
					srcs/Cat.cpp \
					srcs/Brain.cpp \
					srcs/WrongAnimal.cpp \
					srcs/WrongCat.cpp \

OBJS			= $(SRCS:.cpp=.o)


CPP				= c++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= abstract

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