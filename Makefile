all: test.o
	gcc  -o mytest  test.o
test.o: test.c
	gcc  -c -o test.o test.c
clean: 
	rm mytest test.o text
