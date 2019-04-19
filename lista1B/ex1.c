/* Essa questão pede 3 notas ,das quais será calculada a 
média aritmética entre elas e ,assim, o programa decidirá se 
o aluno está aprovado ou não
*/
#include <stdio.h>

int main ()
{
	//definir variáveis
	float n1,n2,n3,MEDIA; 
	//entrada com n1,n2 e n3
	scanf("%f %f %f",&n1,&n2,&n3);
	//calcular média aritmética
	MEDIA = (n1 + n2 + n3) / 3;
	//imprimir o resultado da média 
	printf("MEDIA = %.2f\n",MEDIA);
	//decidir se o aluno foi aprovado ou não
	if(MEDIA >= 6)
		printf("APROVADO\n");
	else
		printf("REPROVADO\n");
	return 0;
}
