#include <stdio.h>

int main ()
{
	int M,N;
	
	printf("Digite dois numeros:\n");
	scanf("%i %i", &M, &N);
	if (M % N == 0)
	{
		printf("%i eh divisivel por %i\n",M ,N);
	}
	else
	{
		printf("%i nao eh divisivel por %i\n",M ,N);
	}
	
	return 0;
}
