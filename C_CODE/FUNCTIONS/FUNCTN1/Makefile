App:App.c add.0 sub.o mul.o div.o arith.h
	gcc App.c add.c sub.o mul.o div.o -o App libArith.a

add.0:add.c
	gcc -c add.c

sub.o:sub.c
	gcc -c sub.c

mul.o:mul.c
	gcc -c mul.c

div.o:div.c
	gcc -c div.c

clean:
	rm*o App						
