FLAGS = -Wall -Wextra -Werror -pedantic -Weffc++
COMPILER = g++

all: clean hello problem6

hello:
	$(COMPILER) $(FLAGS) hello.cpp -o hello

problem6:
	$(COMPILER) $(FLAGS) problem6.cpp -o problem6

clean: 
	rm -rf hello problem6
