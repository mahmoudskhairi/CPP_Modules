CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Fixed
RM = rm -rf
SOURCES = main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp Fixed.hpp Point.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
