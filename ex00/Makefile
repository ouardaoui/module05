cc = c++
flags = -Wall -Wextra -Werror -std=c++98
src = main.cpp Bureaucrat.cpp 
obj = ${src:.cpp=.o}
name = bureaucrat

all: ${name}

%.o: %.cpp
	${cc} ${flags} -c -o $@ $<

${name}: ${obj}
	${cc} ${flags} ${obj} -o ${name}

clean:
	rm -rf ${obj}

fclean: clean
	rm -rf ${name}

run:
	make re && ./Bureaucrat

re: fclean all

.PHONY: all clean fclean run re
