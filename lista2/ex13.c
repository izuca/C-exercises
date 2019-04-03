#include <stdio.h>

int main()
{
	char funcionario[15];
	float extras,faltas,total;
	
	printf("Digite o nome e horas extras e ausentes:\n");
	scanf("%s %f %f", funcionario ,&extras, &faltas);
	
	total = (extras - ((2*faltas)/3));
	if(total > 40)
	{
		printf("Parabéns!!!Você ganhou um premio de R$200.00\n");
	}
	else if (total > 30 && total <= 40)
	{
		printf("Parabéns!!!Você ganhou um premio de R$175.00\n");	
	} 
	else if (total >20 && total <=30)
	{
		printf("Parabéns!!!Você ganhou um premio de R$150.00\n");
	}
	else if (total >10 && total <=20)
	{
		printf("Parabéns!!!Você ganhou um premio de R$125.00\n");	
	}
	else if (total <=10)
	{
		printf("Parabéns!!!Você ganhou um premio de R$100.00\n");
	}
	return 0;
}
