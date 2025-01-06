CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = Zombie
SOURCES = main.cpp Zombie.cpp zombieHorde.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME):$(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all