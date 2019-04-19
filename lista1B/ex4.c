#include <stdio.h>

int main ()
{
	int horas;
	
	scanf("%i",&horas);
	printf("O VALOR A PAGAR E = %i\n",(horas / 3) * 10 + (horas % 3) * 5);
	
	return 0;
}
