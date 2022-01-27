test-bytes: test-bytes.o show-bytes.c
	gcc -o show-bytes.test test-bytes.o

test-bytes.o: test-bytes.c
	gcc -c test-bytes.c

clean:
	rm -f *.o *.test