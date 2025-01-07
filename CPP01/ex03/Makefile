CC = c++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCESDIR = sources
INCLUDESDIR = includes
SOURCES = $(addprefix $(SOURCESDIR)/, HumanA.cpp HumanB.cpp Weapon.cpp main.cpp)
HEADERS = $(addprefix $(INCLUDESDIR)/, HumanA.hpp HumanB.hpp Weapon.hpp)
OBJECTS = ${SOURCES:.cpp=.o}
NAME = Weapon

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all