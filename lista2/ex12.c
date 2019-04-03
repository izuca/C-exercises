#include <stdio.h>

int main ()
{
	char nome[20];
	float salario;
	
	printf("Digite o nome e salário:\n");
	scanf("%s %f",nome , &salario);
	
	if (salario <= 900.00)
	{
		printf("O jogador %s terá aumento de R$%.2f e passará a receber R$%.2f\n",nome,salario*0.2,salario+salario*0.2);
	}
	else if (salario > 900.00 && salario <= 1300.00)
	{
		printf("O jogador %s terá aumento de R$%.2f e passará a receber R$%.2f\n",nome,salario*0.15,salario+salario*0.15);
	}
	else if (salario > 1300.00 && salario <= 1800.00)
	{
		printf("O jogador %s terá aumento de R$%.2f e passará a receber R$%.2f\n",nome,salario*0.1,salario+salario*0.1);
	}
	else if (salario >1800.00)
	{
		printf("O jogador %s terá aumento de R$%.2f e passará a receber R$%.2f\n",nome,salario*0.05,salario+salario*0.05);
	}



	return 0;
}
