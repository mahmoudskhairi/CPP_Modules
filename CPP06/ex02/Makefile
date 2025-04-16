CC = c++
CPPFLAGS = -Wall -Wextra -Werror  -D PRINTINGMODE=1 #-std=c++98 #-fsanitize=address
NAME = Serializer
SOURCES = main.cpp Serializer.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp Serializer.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	@ $(RM) $(OBJECTS)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all
