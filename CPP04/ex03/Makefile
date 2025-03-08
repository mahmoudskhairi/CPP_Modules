CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -D PRINTINGMODE=0 #-fsanitize=address
NAME = MagicWorld
RM = rm -rf
SRCDIR = sources
INCDIR = includes
SOURCES = $(addprefix $(SRCDIR)/,main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp List.cpp)
OBJECTS = ${SOURCES:.cpp=.o}
Headers = $(addprefix $(INCDIR)/,AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp List.hpp)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ $(CC) $(CPPFLAGS) $(SHADOWFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp $(HEADERS)
	@ $(CC) -c $(CPPFLAGS) $(SHADOWFLAGS) $< -o $@

clean:
	@ $(RM) $(OBJECTS)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all
