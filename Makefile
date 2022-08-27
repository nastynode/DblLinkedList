all:
	gcc -o main main.c -lncurses
clean:
	rm main
remake:
	rm main
	gcc -o main main.c -lncurses
	./main
