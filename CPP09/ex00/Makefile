CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
NAME = btc
SOURCES = main.cpp BitcoinExchange.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp BitcoinExchange.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	@ $(RM) $(OBJECTS)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all
