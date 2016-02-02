mypi:	pimaker.o
	gcc -o mypi pimaker.o 
mypi.o:	pimaker.c
	gcc -c pimaker.c
clean:
		rm *.o
