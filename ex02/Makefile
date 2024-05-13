NAME = ex02

SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp AAnimal.cpp MuteCat.cpp
OBJS := $(SRCS:%.cpp=%.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re