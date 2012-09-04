FLAGS = -Wall -Wextra -Werror -pedantic -Weffc++
COMPILER = g++

all: clean hello problem2

hello:
	$(COMPILER) $(FLAGS) hello.cpp -o hello

problem2:
	$(COMPILER) $(FLAGS) problem2.cpp -o problem2

clean: 
	rm -rf hello problem2
