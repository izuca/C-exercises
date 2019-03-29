#include <stdio.h>

int main ()
{
	float nota1,nota2,media;
	char aluno[15];
	
	printf("Digite o nome e as notas:\n");
	scanf("%s %f %f",aluno , &nota1, &nota2);
	
	media = (nota1 * 2 + nota2 * 3)/5;
	
	if (media < 3)
	{
		printf("O aluno %s obteve média %.2f e está REPROVADO\n",aluno ,media);
	}
	if (media >= 3 && media < 7)
	{
		printf("O aluno %s obteve média %.2f e está de RECUPERAÇÃO\n",aluno, media);
	}
	if (media >= 7)
	{
		printf("O aluno %s obteve média %.2f e está APROVADO\n",aluno, media);
	}
	




	return 0;
}
