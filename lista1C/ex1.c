#include <stdio.h>
#include <math.h>

int main ()
{
	int n;
	double pessoas,popular,geral,arquibancada,cadeiras,renda;

	scanf("%i",&n);
	
	for(int i = 1;i <= n;i++)
	{
		scanf("%lf %lf %lf %lf %lf",&pessoas,&popular,&geral,&arquibancada,&cadeiras);

		renda =  (pessoas * (popular + geral * 5.0 + arquibancada * 10.0 + cadeiras * 20.0))/100.0;
		printf("A RENDA DO JOGO N. %i E = %.2lf\n",i,truncf(renda*100)/100);

	}

	return 0;
}
