#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

double nroot(int x, int n)
{
	return pow(x, 1./n);
}

int main(int argc, char** argv)
{
	int x = 25, n = 2, opt;
	while((opt = getopt(argc, argv, "x:n:h")) != -1) 
	{ 
		switch(opt) 
		{ 
			case 'x':
				x = atoi(optarg);
				break;
			case 'n':
				n = atoi(optarg);
				break;
			case 'h':
				printf("Usage: ./program [-x <int>] [-n <int>]\n");
				printf("\tx defaults to 25\n");
				printf("\tn defaults to 2\n");
				return 0;
			default:
				fprintf(stderr, "Unkown option: %c\n", optopt);
				return 1;
		}
	}

	printf("The %d-th root of %d is approx. %f\n", n, x, nroot(x, n));
	return 0;
}
