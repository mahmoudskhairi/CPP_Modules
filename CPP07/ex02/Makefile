CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -D PRINTINGMODE=0  #-fsanitize=address
NAME = Array
SOURCES = main.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp Array.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	@ $(RM) $(OBJECTS)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all
