#include <stdio.h>

int main ()
{
	int hrs,min,s,x;
	
	scanf("%i %i %i",&hrs, &min, &s);
	
	x = s + 60 * min + 3600 * hrs;
	
	printf("O TEMPO EM SEGUNDOS E = %i\n",x);

	return 0;
}
