CC = c++
CPPFLAGS = -Wall -Wextra -Werror  -D PRINTINGMODE=1 #-std=c++98 #-fsanitize=address
NAME = ScalarConverter
SOURCES = main.cpp ScalarConverter.cpp AnalyseData.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.cpp ScalarConverter.hpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	@ $(RM) $(OBJECTS)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all
