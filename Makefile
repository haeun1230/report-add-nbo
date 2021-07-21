add_nbo.out: main.o
	gcc -o add-nbo main.o

main.o: main.cpp

clean:
	rm -f add_add
	rm -f *.o


