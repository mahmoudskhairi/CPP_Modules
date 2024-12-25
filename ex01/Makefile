CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = PhoneBook
SOURSESDIR = sources
HEADERSDIR = headers
SOURCES = $(addprefix $(SOURSESDIR)/, main.cpp PhoneBook.cpp Contact.cpp)
OBJECTS = ${SOURCES:.cpp=.o}
HEADERS = $(addprefix $(HEADERSDIR)/, Contact.hpp PhoneBook.hpp)
all: $(OBJECTS) $(HEADERS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
%.o:%.cpp $(HEADERS)
	$(CC) -c $(CPPFLAGS) $< -o $@
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re : fclean all
  