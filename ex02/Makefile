CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Account
SOURCES = tests.cpp Account.cpp
OBJECTS = ${SOURCES:.cpp=.o}
HEADERS = Account.hpp
all: $(NAME)

$(NAME) : $(OBJECTS) $(HEADERS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
%.o:%.cpp $(HEADERS)
	$(CC) -c $(CPPFLAGS) $< -o $@
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re : fclean all