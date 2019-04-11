#include <stdio.h>
#include <math.h>

int main ()
{
	int valor,X,Y,Z,W;
	
	scanf("%i",&valor);
	
	X = valor / 100;
	Y = (valor % 100) / 50;
	Z = ((valor % 100) % 50) / 10;
	W = ((valor % 100) % 50) % 10;
	
	
	printf("NOTAS DE 100 = %i\n",X);
	printf("NOTAS DE 50 = %i\n",Y);
	printf("NOTAS DE 10 = %i\n",Z);
	printf("MOEDAS DE 1 = %i\n",W);



	return 0;
}
