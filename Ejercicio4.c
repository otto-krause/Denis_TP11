#include <stdio.h>
#include <stdlib.h>

float calcularpresion (float a, float b, float c);

int main()
{
	float a,b,presion;
	
	printf("Ingrese los datos\n");
	printf("Fuerza: ");
	scanf("%f",&a);
	printf("Superficie: ");
	scanf("%f",&b);
	presion= calcularpresion(a,b,presion);
	printf("\n La presion que ejerce su elemento hacia la superficie es de: %.2f",presion);
	printf(" Pascal\n");
	return 0;
}
float calcularpresion (float a, float b, float presion)
{
	presion= a/b;
	return presion;
}
