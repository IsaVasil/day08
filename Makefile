cc=gcc

.PHONY:all
all:program
main.o:main.c hello.h
	$(cc) -c main.c -o main.o

hello.o:hello.c
	$(cc) -c hello.c -o hello.o

program: main.o hello.o
	$(cc) main.o hello.o -o $@
.PHONY:clear
clean:
	rm -r main.o hello.o 

allinfo.data: moreinfo.data
	cat moreinfo.data>allinfo.data
	echo "all">>all


moreinfo.data: infofile.data
	cat infofile.data > moreinfo.data
	echo "More info" >> moreinfo.data

infofile.data:
	echo "Some info" > infofile.data
.PHONY:clear
clear:
	rm -r *.data allinfo.data