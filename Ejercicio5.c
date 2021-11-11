#include <stdio.h>
#include <stdlib.h>

float sumarresis (int a,float sum,float num);
void mostrarproces(float num, float sum,int b);
int main()
{
	int a, b, i;
	float sum,num;
	printf("Ingrese el valor de 5 resistencias : \n");
	sum=sumarresis (a,sum,num);
	printf("\n RT: %.2f\n",sum);
	printf("Procedimiento: \n");
	mostrarproces(num,sum,b);
}
float sumarresis (int a,float sum,float num)
{
	sum=0;
	for (a=1;a<=5;a++)
	{
		printf("Resistencia %d: ",a);
		scanf ("%f",&num);
		sum=sum+num;
	}
	return sum;
}
void mostrarproces(float num, float sum, int b)
{
	printf("RT= ");
	for (b=1;b<=5;b++)
	{
		printf("R%d",b);
		if (b!=5)
		{
			printf(" + ");
		}
	}
}
