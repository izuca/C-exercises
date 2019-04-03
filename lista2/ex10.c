#include <stdio.h>
#include <math.h>

int main ()
{
	float a,b,c,delta,x1,x2;
	
	printf("Digite o coeficiente A , B e C:\n");
	scanf("%f %f %f",&a ,&b ,&c);
	
	delta = b*b - 4 * a * c;
	
	if(delta < 0)
	{
		printf("Não existe raíz real\n");
	}
	else if(delta == 0)
	{
		x1 = x2 = -b / (2* a);
		printf("A única raíz é : %.2f\n",x1);
	}
	else if(delta > 0)
	{
		x1 = (- b + sqrt(delta))/(2 * a);
		x2 = (- b - sqrt(delta))/(2 * a);
		printf("x1 = %.2f e x2 = %.2f \n",x1 , x2);
	}





	return 0;
}
