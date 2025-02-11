CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Animal
RM = rm -rf
SRCDIR = sources
INCDIR = includes
SOURCES = $(addprefix $(SRCDIR)/,main.cpp Animal.cpp Cat.cpp Dog.cpp)
OBJECTS = ${SOURCES:.cpp=.o}
Headers = $(addprefix $(INCDIR)/,Animal.hpp Cat.hpp Dog.hpp)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(SHADOWFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp $(HEADERS)
	$(CC) -c $(CPPFLAGS) $(SHADOWFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
