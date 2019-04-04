csrc =  $(wildcard src/*.c) \
		$(wildcard src/entities/*.c)
obj = $(csrc:.c=.o) #$(ccsrc:.cc=.o)

FLAGS = -lSDL2

out: $(obj)
	$(CC) -o $@ $^ $(FLAGS)

clean:
	rm -f $(obj)