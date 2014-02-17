SRC=sample_prog
LIB=lib/lib_sample
CFLAGS=-g

TARGET=sample

$(TARGET): $(SRC).o $(LIB).a
	$(CC) -o $@ $^ $(CFLAGS)

$(SRC).o: $(SRC).c

$(LIB).a: $(LIB).c
	make -C lib

clean:
	make -C lib clean
	rm -f *.o $(TARGET)
