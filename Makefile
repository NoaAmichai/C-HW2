CC =gcc
AR =ar
FLAGS = -Wall -g
MAT = my_mat.o
MAT_H = my_mat.h
MAIN_O = main.o 

#val: valgrind -q --leak-check=full ./connections

all: valgrind mats matsd connections

.PHONY: all clean valgrind

valgrind: connections
	valgrind --leak-check=full ./connections


connections : $(MAIN_O) matsd.so
	$(CC) $(FLAGS) -o connections $(MAIN_O) ./matsd.so 
	

mats: mats.a
matsd: matsd.so
#Create lib

mats.a: $(MAT)
	$(AR) -rcs mats.a $(MAT)
	ranlib mats.a

matsd.so:$(MAT)
	$(CC) -shared -o matsd.so $(MAT)


#Create o files

$(MAIN_O): main.c $(MAT_H)
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c $(MAT_H)
	$(CC) $(FLAGS) -fPIC -c my_mat.c

clean:
	rm -f *.o *.a *.so mains maind connections