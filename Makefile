CC = gcc
CFLAGS = -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo

all: main

main: src/main.c src/visualizer.c
	$(CC) $(CFLAGS) src/visualizer.c src/main.c -o bin/main -Iinclude $(LDFLAGS)

clean:
	rm -f main
