CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = FragTrap
RM = rm -rf
SOURCES = main.cpp ScavTrap.cpp ClapTrap.cpp FragTrap.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp ScavTrap.hpp ClapTrap.hpp FragTrap.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
