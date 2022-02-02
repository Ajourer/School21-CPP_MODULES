NAME = bureaucrat
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
	   Bureaucrat.cpp\
	   Form.cpp\
	   PresidentialPardonForm.cpp\
	   RobotomyRequestForm.cpp\
	   ShrubberyCreationForm.cpp\

HEADERS = Bureaucrat.hpp\
		  Form.hpp\
		  PresidentialPardonForm.hpp\
		  RobotomyRequestForm.hpp\
		  ShrubberyCreationForm.hpp\

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile $(HEADERS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME) *_shrubbery

re: fclean all

.PHONY: all, clean, fclean, re
