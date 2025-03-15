CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = bureaucrat

all: $(NAME)

$(NAME):
	$(CPP) $(CPPFLAGS) bureaucrat.cpp main.cpp -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean

re : fclean all
