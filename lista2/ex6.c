#include <stdio.h>

int main ()
{
	char nome[15];
	int idade;
	
	printf("Digite o nome e idade:\n");
	scanf("%s %i", nome, &idade);
	
	if (idade >= 18)
	{
		printf("%s tem %i anos e é maior de idade\n",nome,idade);
	}
	else
	{
		printf("%s tem %i anos e é menor de idade\n",nome,idade);
	}



	return 0;
}
