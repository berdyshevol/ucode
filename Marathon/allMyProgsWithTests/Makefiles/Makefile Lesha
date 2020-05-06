all:
	clang -I"inc/" -std=c11 -Wall -Wextra -Werror -Wpedantic -c src/*.c
	ar -cvq minilibmx.a *.o

install:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o main *.a

uninstall:
	rm -rf /usr/local/bin/minilibmx.all

clean:
	rm -rf *.o *.a

reinstall:
	make clean
	make all
	make uninstall
	make install