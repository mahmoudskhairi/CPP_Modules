CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ClapTrap
RM = rm -rf
SOURCES = main.cpp ClapTrap.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp ClapTrap.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
