#include <stdio.h>

int main ()
{
	char pergunta;
	
	printf("Você fez todos os algoritmos? S/N\n");
	scanf("%c",&pergunta);
	if (pergunta == 'S'|| pergunta == 's' )
	{
		printf("Você irá sair bem na prova!\n");
	}
	else
	{
		printf("Precisa estudar mais!\n");
	}



	return 0;
}
