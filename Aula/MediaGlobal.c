/*Nesse exercício eu fiz uma calculadora de média globais
nela o usuário insere a quantidade de alunos,e suas respectivas médias
após isso, o programa calcula se eles foram aprovados(media >=6)ou reprovados e 
calcula a média global deles
*/
#include <stdio.h>

int main ()
{
	//definindo variaveis
	float global,nota,alunos;
	global = 0;
	
	printf("\t\t\t\tBEM-VINDO A CALCULADORA DE MÉDIAS GLOBAIS\n");
	printf("Digite a quantidade de alunos:\n");
	scanf("%f",&alunos);//numero de alunos
	printf("Digite a médias dos %.0f alunos:\n",alunos);
	
	for(int i = 0;i < alunos;i++) //laço de repetição que vai repetir a quantidade de alunos
	{
		
		scanf("%f",&nota); //entrando com a nota
		
		global += nota; //atribuindo a nota a soma da media global
		
		if(nota >= 6.0)//decidir se o aluno foi aprovado
		{
			printf("APROVADO\n");
		}
		else
		{
			printf("REPROVADO\n");
		}
	}
	printf("A média global da turma foi de : %.2f\n",global/alunos);//imprimir a media global

	return 0;
}
