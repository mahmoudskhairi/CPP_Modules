CC = c++
CPPFLAGS = -Wall -Wextra -Werror  -D PRINTINGMODE=1 #-std=c++98 #-fsanitize=address
NAME = generate
SOURCES = main.cpp Base.cpp A.cpp B.cpp C.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp Base.hpp A.cpp B.cpp C.cpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	@ $(RM) $(OBJECTS)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all
