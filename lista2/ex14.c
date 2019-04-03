#include <stdio.h>

int main()
{
	int numero1,numero2;
	
	printf("Digite dois números\n");
	scanf("%i %i",&numero1, &numero2);
	
	if (numero1 == numero2)
	{
		printf("Números iguais\n");
	}
	else if (numero1 > numero2)
	{
		printf("%i é maior número \n",numero1);
	}	
	else if (numero2 > numero1)
	{
		printf("%i é maior número \n",numero2);
	}
	
	
	
	return 0;
}
