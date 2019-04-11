#include <stdio.h>
#include <math.h>

int main ()
{
	float h,a,Ab,v;
	
	scanf("%f %f",&h ,&a);

	Ab = (3 * pow(a,2) * sqrt(3)) / 2;
	v = (Ab * h) / 3;
	
	
	printf("O VOLUME DA PIRAMEDE E = %.2f METROS CUBICOS\n", truncf(v * 100)/100);

	return 0;
}
