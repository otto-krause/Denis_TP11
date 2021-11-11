#include <stdio.h>
#include <stdlib.h>
int ingresos (int numero1, int numero2);
int main()
{
	int numero1=0,numero2=0;
	printf("Ingrese dos numeros:\n");
	scanf("%d",&numero1);
	scanf("%d",&numero2);
	printf("Los numeros ingresados son:");
	ingresos (numero1,numero2);
}
int ingresos(int numero1, int numero2)
{
	printf("\n%d\n%d",numero1,numero2);
	return 0;
}
