SRC=sample_prog
LIB=lib/lib_sample.a
CFLAGS=-g

TARGET=sample

$(TARGET): $(SRC).o $(LIB)
	$(CC) -o $@ $^ $(CFLAGS)

$(SRC).o: $(SRC).c

$(LIB): $(LIB)
	make -C lib

clean:
	make -C lib clean
	rm -f *.o $(TARGET)
