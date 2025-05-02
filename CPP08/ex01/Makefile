CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
NAME = Span
SOURCES = main.cpp Span.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp Span.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	@ $(RM) $(OBJECTS)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all
