#include <stdio.h>
#include <stdlib.h>

float calcular (float a, float num);
int main()
{
	float num, a;
	printf("Ingrese un digito: ");
	scanf("%f",&num);
	a=calcular(a,num);
	printf("La octava parte de %.2f es: %.2f",num,a);
	return 0;
}
float calcular(float a, float num)
{
	a=num/8;
	return a;
}
