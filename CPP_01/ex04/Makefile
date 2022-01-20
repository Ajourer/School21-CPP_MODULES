NAME = replace
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME) 
		rm -rf *.replaced

re: fclean all

.PHONY: all, clean, fclean, re
