CC = gcc

SRC = main.c program.c
TAR = main

$(TAR): $(SRC)
	@echo "compiling the program..."
	$(CC) $^ -o $@

run: $(TAR)
	@echo "running the program..."
	./$<

clean:
	@echo "Deleting executable file..."
	rm -rf $(TAR)
