CC =gcc
AR =ar
FLAGS = -Wall -g
MAT = my_mat.o
MAT_H = my_mat.h
MAIN_O = main.o 

# valgrind -q --leak-check=full

all:mats matsd connections

.PHONY: all clean 

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