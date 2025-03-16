CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SHADOWFLAGS = -Wshadow -Wno-shadow
NAME = DiamondTrap
RM = rm -rf
SRCDIR = sources
INCDIR = includes
SOURCES = $(addprefix $(SRCDIR)/,main.cpp ScavTrap.cpp ClapTrap.cpp FragTrap.cpp DiamondTrap.cpp)
OBJECTS = ${SOURCES:.cpp=.o}
HEADERS = $(addprefix $(INCDIR)/,ScavTrap.hpp ClapTrap.hpp FragTrap.hpp DiamondTrap.hpp)

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
