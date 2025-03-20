CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -D PRINTINGMODE=0 #-fsanitize=address
NAME = AForm
RM = rm -rf
SRCDIR = sources
INCDIR = includes
SOURCES = $(addprefix $(SRCDIR)/,main.cpp AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp)
OBJECTS = ${SOURCES:.cpp=.o}
HEADERS = $(addprefix $(INCDIR)/,Bureaucrat.hpp  AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp)
all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS)  $(OBJECTS) -o $(NAME)


%.o: %.cpp $(HEADERS)
	$(CC) -c $(CPPFLAGS)  $< -o $@

clean:
	$(RM) $(OBJECTS) home_shrubbery

fclean: clean
	$(RM) $(NAME) home_shrubbery

re: fclean all

