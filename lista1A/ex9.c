#include <stdio.h>
#include <math.h>

int main ()
{
	double vm,m,a,t,v,s,W;
	
	scanf("%lf %lf %lf",&m, &a, &t);
	vm = (a * t);
	v = (a * t) * 3.6;
	s = (a * pow(t,2)) / 2;
	W = ((m * 1000) * (v / 3.6) * (v / 3.6)) / 2;
	
	printf("VELOCIDADE = %.2lf\n",truncf(v * 100)/100);
	printf("ESPACO PERCORRIDO = %.2lf\n",truncf(s * 100)/100);
	printf("TRABALHO REALIZADO = %.2lf\n",truncf(W * 100.0)/100.0);

	return 0;
}
