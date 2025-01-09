CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Harl
RM = rm -rf
SOURCES = main.cpp Harl.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp Harl.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS) dest.replace

fclean: clean
	$(RM) $(NAME)

re: fclean all
