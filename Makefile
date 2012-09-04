FLAGS = -Wall -Wextra -Werror -pedantic -Weffc++
COMPILER = g++

hello:
	$(COMPILER) $(FLAGS) hello.cpp -o hello
