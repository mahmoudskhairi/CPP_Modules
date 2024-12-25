CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = PhoneBook
SOURCES = main.cpp PhoneBook.cpp Contact.cpp
OBJECTS = ${SOURCES:.cpp=.o}
HEADERS = Contact.hpp PhoneBook.hpp
all: $(OBJECTS) $(HEADERS)
	$(CC) $(CPPFLAGS) main.o PhoneBook.o Contact.o -o $(NAME)
%.o:%.cpp $(HEADERS)
	$(CC) -c $(CPPFLAGS) $< -o $@
clean:
	rm -rf $(NAME)
fclean: clean
re : fclean all
  