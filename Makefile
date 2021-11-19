CC=gcc
final:main.o sum.o sub.o 
	$(CC) $^ -o $@
%.o:%.c
	$(CC) -c $<
clean:
	rm -f *.o final
