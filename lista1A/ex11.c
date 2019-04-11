#include <stdio.h>
#include <math.h>

int main ()
{
	int numero,c,d,u,invertido;
	
	scanf("%i",&numero);
	
	c = numero / 100;
	d = (numero % 100) / 10;
	u = (numero % 100) % 10;
	invertido = u * 100 + d * 10 + c;
	
	printf("%i\n",invertido);

	return 0;
}
