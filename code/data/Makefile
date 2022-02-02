test-bytes: test-bytes.o show-bytes.c
	gcc -o show-bytes.test test-bytes.o

test-bits: test-bits.o bit-operator.c
	gcc -o test-bits.test test-bits.o

ex-test: ex-test.c
	gcc -o ex-test.test ex-test.c && ./ex-test.test

test-bytes.o: test-bytes.c
	gcc -c test-bytes.c

test-bits.o: test-bits.c
	gcc -c test-bits.c

clean:
	rm -f *.o *.test