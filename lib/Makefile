SRC=lib_sample

TARGET=$(SRC).a
$(TARGET): $(SRC).o
	$(AR) rcs $@ $^

$(SRC).o: $(SRC).c

clean:
	rm -f $(TARGET) *.o
