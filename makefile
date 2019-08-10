CC=gcc

all: recursions

recursions:  
	$(CC) -o recexec recursions.c  utility.c
     
clean:
	rm -f recexec

	
	
	