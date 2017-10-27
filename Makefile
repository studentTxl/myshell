MY_SH:my_sh.o myshell.o
	gcc -o MY_SH my_sh.o myshell.o
my_sh.o:my_sh.c
	gcc -o my_sh.o -c my_sh.c -g
myshell.o:myshell.c
	gcc -o myshell.o -c myshell.c  -g

clean:
	rm *.o MY_SH
