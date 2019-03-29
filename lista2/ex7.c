#include <stdio.h>

int main ()
{
	int A, B, C;
	
	printf("Digite três números:\n");
	scanf("%i %i %i",&A, &B, &C);
	
	if (A + B > C && B + C > A && C + B > A)
	{
		printf("Esses valores podem formar um triângulo\n");
	}
	else
	{
		printf("Esses valors NÃO podem formar um triângulo\n");
	}
	
	
	return 0;
}
