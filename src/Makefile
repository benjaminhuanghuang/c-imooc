
CC=gcc
CFLAGS=-I


%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

fibonacci: fibonacci.c
	$(CC) -o fibonacci.exe fibonacci.c

hanoi: hanoi.c
	$(CC) -o hanoi.exe hanoi.c


rm:
	rm -f *.exe
	rm -f *.o