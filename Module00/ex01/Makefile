SRCS			= srcs/Contact.cpp srcs/main.cpp srcs/PhoneBook.cpp
OBJS			= $(SRCS:.cpp=.o)


CPP				= c++
RM				= rm -f
CPPFLAGS		= -std=c++98 -Wall -Wextra -Werror

NAME			= phonebook


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