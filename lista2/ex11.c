#include <stdio.h>

int main ()
{
	float media;
	char nome[20];
	
	printf("Digite o seu nome e média:\n");
	scanf("%s %f",nome , &media);
	
	if (media >= 9.0)
	{
		printf("O aluno %s é altamente recomendado\n",nome);
	}
	else if (media >= 8.0 && media < 9.0)
	{
		printf("O aluno %s é fortemente recomendado\n",nome);
	}
	else if (media >=7.0 && media < 8.0)
	{
		printf("O aluno %s é recomendado\n",nome);
	}
	else if (media < 7.0)
	{
		printf("O aluno %s é não recomendado\n",nome);
	}

	return 0;
}
