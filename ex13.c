#include <stdio.h>
#include <math.h>

int main ()
{
	float a,b,c,d,e,f,x,y;
	
	scanf("%f %f %f %f %f %f",&a ,&b ,&c ,&d ,&e ,&f);
  	
  	y = (a * f - d * c) / (a * e - d * b);
	x = (c - b * y) / a;
	
	printf("O VALOR DE X E = %.2f\n",truncf(x * 100)/100);
	printf("O VALOR DE Y E = %.2f\n",truncf(y * 100)/100);
	

	return 0;
}
