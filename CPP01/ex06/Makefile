CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = HarlFilter
RM = rm -rf
SOURCES = main.cpp Harl.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp Harl.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
