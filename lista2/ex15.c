#include <stdio.h>
#include <math.h>

int main ()
{
	float n1,n2,n3;
	
	printf ("Digite 3 números:\n");
	scanf ("%f %f %f",&n1 , &n2, &n3);
	
	if (n1 > 0)
	{
		printf ("%.2f\n",sqrt(n1));
	}
	else 
	{
		printf ("%.2f\n", pow(n1,2));
	}
	if (n2 > 10 && n2 < 100)
	{
		printf ("Número está entre 10 e 100-intervalo permitido\n");
	}
	if (n3 > n2)
	{
		printf("%.2f\n",n3 - n2);
	}
	else
	{
		printf("%.2f\n",n3 + 1);
	}
	return 0;
}
