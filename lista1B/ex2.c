#include <stdio.h>

int main ()
{
	int conta;
	float consumo;
	char tipo;
	
	scanf("%i %f %c",&conta, &consumo, &tipo);
	printf("CONTA = %i\n",conta);
	
	if (tipo == 'R')
		printf("VALOR DA CONTA = %.2f\n",5 + 0.05 * consumo);
	else if	(tipo == 'C')
		printf("VALOR DA CONTA = %.2f\n",500 + 0.25 * (consumo - 80));
	else if	(tipo == 'I')
		printf("VALOR DA CONTA = %.2f\n",800 + 0.04 * (consumo - 100));


	return 0;
}
