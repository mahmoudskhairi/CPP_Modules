CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -D PRINTINGMODE=1 #-fsanitize=address
NAME = Form
SOURCES = main.cpp Bureaucrat.cpp Form.cpp
OBJECTS = ${SOURCES:.cpp=.o}
HEADERS = Bureaucrat.hpp Form.hpp

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp $(HEADERS)
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	@ $(RM) $(OBJECTS)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all
