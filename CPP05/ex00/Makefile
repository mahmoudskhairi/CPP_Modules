CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -D PRINTINGMODE=0 #-fsanitize=address
NAME = bureaucrat
SOURCES = main.cpp bureaucrat.cpp
OBJECTS = ${SOURCES:.cpp=.o}
HEADERS = bureaucrat.hpp

all: $(NAME)

$(NAME): $(OBJECTS)
	@ $(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp $(HEADERS)
	@ $(CC) -c $(CPPFLAGS) $< -o $@

clean:
	@ $(RM) $(OBJECTS)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all
