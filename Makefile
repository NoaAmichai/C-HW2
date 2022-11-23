CC =gcc
AR =ar
FLAGS = -Wall -g
MAT = my_mat.o
MAT_H = my_mat.h
MAIN_O = main.o

.PHONY: all clean mats matsd

all:mats matsd

mats: mats.a
matsd: matsd.so

#Create lib

mats.a: $(MAT)
	$(AR) -rcs mats.a $(MAT)
	 ranlib mats.a

matsd.so:$(MAT)
	$(CC)  -shared -o matsd.so $(MAT)


#Create o files

$(MAIN_O): main.c $(MAT_H)
	$(CC) $(FLAGS) -c main.c

my_mat.o: $(MAT) $(MAT_H)
	$(CC) $(FLAGS) -fPIC -c my_mat.c

#Create mains
mains: $(MAIN_O) mats.a
	$(CC) $(FLAGS) -o mains $(MAIN_O) mats.a

maind: $(MAIN_O) matsd.so
	$(CC) $(FLAGS) -o maind $(MAIN_O) ./mats.so

clean:
	rm -f *.o *.a *.so mains maind
