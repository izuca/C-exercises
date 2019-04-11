#include <stdio.h>
#include <math.h>

int main ()
{
	int numero,novo,c,d,u,controle;
	
	scanf("%i", &numero);
	
	c = numero / 100;
	d = (numero % 100) / 10;
	u = (numero % 100) % 10;
	controle = (c + d * 3 + u * 5) % 7;
	novo = c * 1000 + d * 100 + u * 10 + controle;
	
	printf("O NOVO NUMERO E = %i\n",novo);
	
	return 0;
}
