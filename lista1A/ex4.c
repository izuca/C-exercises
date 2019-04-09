#include <stdio.h>
#include <math.h>

int main ()
{
	
	float raio, altura,at,ac,al,custo;
	
	scanf("%f %f",&raio, &altura);
	
	ac = 3.14 * pow(raio,2) ;
	al = 2 * 3.14 * raio * altura;
	at = 2 * ac + al;
	custo = at * 100;
		
	printf("O VALOR DO CUSTO E = %.2f\n",truncf(custo * 100)/100);	
	
	return 0;
}
