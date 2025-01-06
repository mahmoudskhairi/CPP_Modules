CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Zombie
RM = rm -rf
SOURCES = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp Zombie.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
