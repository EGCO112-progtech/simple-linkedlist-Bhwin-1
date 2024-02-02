compile: main.c 
	 gcc main.c -o GT

run: GT
	 ./GT

clean: GT
	 rm GT
