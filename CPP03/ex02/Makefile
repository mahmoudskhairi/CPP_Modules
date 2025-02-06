CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SHADOWFLAGS = -Wshadow -Wno-shadow
NAME = FragTrap
RM = rm -rf
SRCDIR = sources
INCDIR = includes
SOURCES = $(addprefix $(SRCDIR)/, main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp)
OBJECTS = ${SOURCES:.cpp=.o}
Headers = $(addprefix $(INCDIR)/, ClapTrap.hpp  ScavTrap.hpp FragTrap.hpp)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(SHADOWFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp $(HEADERS)
	$(CC) -c $(CPPFLAGS) $(SHADOWFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
