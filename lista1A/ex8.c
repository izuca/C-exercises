#include <stdio.h>
#include <math.h>

int main ()
{
	float l1,l2,l3,T,A,Asr;
 
	
	scanf("%f %f %f",&l1, &l2, &l3);
	
	T = (l1 + l2 + l3) / 2;
	Asr = T * (T - l1) * (T - l2) * (T - l3);
	A = sqrt(Asr);
	
	printf("A AREA DO TRIANGULO E = %.2f\n",truncf(A * 100) / 100);

	return 0;
}
