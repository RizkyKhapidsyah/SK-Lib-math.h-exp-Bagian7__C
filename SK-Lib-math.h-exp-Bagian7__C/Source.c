// crt_exp.c

#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main(void) {
	double x = 2.302585093, y;

	y = exp(x);
	printf("exp( %f ) = %f\n", x, y);

	_getch();
	return 0;
}