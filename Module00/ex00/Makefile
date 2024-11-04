SRCS			=	megaphone.cpp
OBJS			=	$(SRCS:.cpp=.o)


CPP				= c++
RM				= rm -f
CPPFLAGS			= -Wall -Wextra -Werror -std=c++98

NAME			= megaphone


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:			%.c
				$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all 

.PHONY:			all clean fclean re