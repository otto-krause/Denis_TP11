#include <stdio.h>
#include <stdlib.h>

void identificar( float num1, float num2);
int main()
{
	float num1,num2;
	
	printf("Ingrese dos digitos \n");
	
	scanf("%f",&num1);
	
	scanf("%f",&num2);
	
	identificar(num1,num2);
	return 0;
}
void identificar( float num1, float num2)
{
	if (num1==num2)
	{
		printf("\n Los numeros son iguales ");
	}
	else
	{
		if (num1>num2)
		{
			printf("\n%.1f es mayor que %.1f",num1,num2);
		}
		else
		{
			printf("\n%.1f es mayor que %.1f",num2,num1);
		}
	}
}
