CC=gcc
CFLAGS=-std=c99 -O3 -s -pipe -lm -Werror -Wall -Wextra -Wundef -Wshadow -Wconversion -Wunreachable-code -Wfloat-equal -Winit-self -Wformat=2

all: xalloc.a
%.o: %.c
	$(CC) -c $? -o $@ $(CFLAGS)
%.a: %.o
	ld -r -o lib$@ $? --wrap=malloc --wrap=calloc --wrap=realloc --wrap=fopen
