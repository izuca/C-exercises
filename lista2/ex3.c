#include <stdio.h>

int main ()
{
	int numero1,numero2;
	
	printf("Digite dois números:\n");
	scanf("%i%i", &numero1, &numero2);
	if (numero1 == numero2)
	{
		printf("Os dois números são iguais\n");
	}
	if (numero1 > numero2)
	{
		printf("%i é maior\n",numero1);
	}
	if (numero2 > numero1)
	{
		printf("%i é maior\n",numero1);
	}

	return 0;
}
