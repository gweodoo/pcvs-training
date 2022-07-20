PCVS_CC?=gcc

CC=$(PCVS_CC)

myprogram: square_root.c
	${CC} $< -o $@ -lm

clean:
	rm -f *.o myprogram
