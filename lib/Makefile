SRC=lib_sample.c
OBJ=$(patsubst %.c, %.o, $(SRC))
TARGET=$(patsubst %.c, %.a, $(SRC))

$(TARGET): $(OBJ)
	$(AR) rcs $@ $^

clean:
	rm -f $(TARGET) *.o
