CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = Brain
SOURCES = main.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME):$(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all