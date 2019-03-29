#include <stdio.h>

int main ()
{
	int l1,l2,l3;
	
	printf("Digite o tamanho dos 3 lados do triangulo\n");
	scanf("%i %i %i",&l1 , &l2 , &l3);
	
	if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1)
	{
		if (l1 == l2 && l1 == l3)
		{
			printf("Triângulo Equilátero\n");
		}
		if (l1 != l2 && l1 != l3 && l2 != l3)
		{
			printf("Triângulo Escaleno\n");
		}
		if (l1 == l2 && l1!=l3 || l2 ==l3 && l3 != l1)
		{
			printf("Triângulo Isosceles\n");
		}
	
	}
	else
	{
		printf("Os números digitados não formam um triângulo\n");
	}



	return 0;
}
