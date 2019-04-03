#include <stdio.h>
#include <math.h>

int main ()
{
	float massa, altura, IMC;
	
	printf ("Digite sua massa e altura:\n");
	scanf ("%f %f",&massa ,&altura);
	
	IMC = massa/(altura*altura);
	
	if (IMC >= 30)
	{
		printf("Obesidade Grave (situação indesejável)\n");
	}
	else if (IMC > 25 && IMC < 30)
	{
		printf("Obesidade Moderada\n");
	}
	else if (IMC > 23 && IMC <= 25)
	{
		printf("Normal (não obeso) \n");
	}
	else if (IMC > 21 && IMC <= 23)
	{
		printf(" Magro\n");
	}
	else if (IMC < 21)
	{
		printf("Extremamente magro (situação indesejável)\n");
	}
	return 0;
}
