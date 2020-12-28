CC = gcc -Wall
all: isort txtfind
txtfind: txtfind.o libstringfuncs.a
	${CC} $^ -o $@
isort: isort.o libarrayfuncs.a
	${CC} $^ -o $@

txtfind.o: txtfind.c
	${CC} -c $^

isort.o: isort.c
	${CC} -c $^

libstringfuncs.a: stringfuncs.o
	ar rcs $@ $^

libarrayfuncs.a: arrayfuncs.o
	ar rcs $@ $^

stringfuncs.o: stringfuncs.c stringfuncs.h
	${CC} -c $<

arrayfuncs.o: arrayfuncs.c arrayfuncs.h
	${CC} -c $< 

clean: 
	rm *.o isort txtfind *.a 




