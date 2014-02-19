SRC=sample_prog.c
OBJ=$(patsubst %.c, %.o, $(SRC))
LIB=lib/lib_sample
CFLAGS=-g

TARGET=sample

$(TARGET): $(OBJ) $(LIB).a
	$(CC) -o $@ $^ $(CFLAGS)


$(LIB).a: $(LIB).c
	make -C lib

clean:
	make -C lib clean
	rm -f *.o $(TARGET)
