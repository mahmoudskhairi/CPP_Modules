CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all:$(NAME)

$(NAME):
	$(CPP) $(CPPFLAGS) megaphone.cpp -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean

re : fclean all
