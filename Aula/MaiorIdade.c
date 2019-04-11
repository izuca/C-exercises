//Nesse exercício cinco idades serão recolhidas e a maior delas será imprimida
#include <stdio.h>

int main ()
{
  
	int idade,maior,i;
	i = 0;
	maior = 0;
	
	do
	{	
		scanf("%i",&idade);
		
		if (idade > maior)
		{
			maior = idade;
		}
		i++;
	}
	while (i < 5);
	
	printf("A maior idade é:%i\n",maior);
	
	return 0;
}
