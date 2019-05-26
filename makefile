CC=gcc
CFLAGS=-std=c99 -O3 -s -pipe -lm -Werror -Wall -Wextra -Wundef -Wshadow -Wconversion -Wunreachable-code -Wfloat-equal -Winit-self -Wformat=2

all: xalloc.a vector.a clean
xalloc.a:
	$(MAKE) -C xalloc
vector.a: vector.o vector_item.o
	ld -r -o lib$@ $? xalloc/libxalloc.a
%.o: %.c
	$(CC) -c $? -o $@ $(CFLAGS)
clean:
	$(RM) *.o
