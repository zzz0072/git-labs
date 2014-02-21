SRC=lib_sample.c
CFLAGS=-g
OBJ=$(patsubst %.c, %.o, $(SRC))
TARGET=$(patsubst %.c, %.a, $(SRC))

$(TARGET): $(OBJ)
	$(AR) rcs $@ $^

clean:
	rm -f $(TARGET) *.o
