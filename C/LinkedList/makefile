CC = gcc
OBJ = main.o linked_list.o

program: $(OBJ)
	$(CC) $(OBJ) -o program
	make clean

main.o: main.c linked_list.h
	$(CC) -c main.c

linked_list.o: linked_list.c linked_list.h
	$(CC) -c linked_list.c

clean:
	@rm -f $(OBJ)