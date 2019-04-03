#include <stdio.h>
#include <math.h>

int main ()
{
	float n1,n2,aulasM,aulasA;
	
	printf("Digite as duas notas:\n");
	scanf("%f %f",&n1 ,&n2);
	
	printf("Digite as qtd de aulas ministrada e presentes:\n");
	scanf("%f %f",&aulasM , &aulasA);

	
	if ( ((n1 + n2)/ 2) >= 6 && (aulasA / aulasM) >= 0.75)
	{
		printf("APROVADO com média de :%.2f\n",((n1 + n2)/ 2));
	}
	
	else 
	{
		printf("REPROVADO com média de:%.2f\n",((n1 + n2)/ 2));
	}
	return 0;
}
