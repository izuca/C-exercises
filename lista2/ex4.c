#include <stdio.h>

int main ()
{
	int numero;
	
	printf("Digite um número:\n");
	scanf("%i", &numero);
	if (numero % 2 == 0)
	{
		printf("Par\n");
	}
	else
	{
		printf("Impar\n");
	}
	return 0;
}
