copyfile:	copyfile.o
	gcc -o copyfile copyfile.o
copyfile.o:	copyfile.c copyfile.h
	gcc -c copyfile.c
delete:
	rm -f *.o
