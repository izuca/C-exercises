//Nesse exercício cinco idades serão recolhidas e a maior delas será imprimida
#include <stdio.h>

int main ()
{
  	//introduzi a variáveis
	int idade,maior,i;
	i = 0;
	maior = 0;
	//Usei o laço de repetição do while
	do
	{	
		scanf("%i",&idade); // ler as idades
		
		if (idade > maior)  
		{
			maior = idade; // atribuir a maior idade
		}
		i++;
	}
	while (i < 5);

	printf("A maior idade é:%i\n",maior); //imprimir maior idade
	
	return 0;
}
