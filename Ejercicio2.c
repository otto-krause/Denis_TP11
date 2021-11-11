#include <stdio.h>
#include <stdlib.h>

float calculararea (float ancho,float alt, float area);

float calcularperimetro (float alt, float ancho, float perimetro);

int main ()
{
	float alt,ancho, area=0, perimetro=0;
	
	printf ("Ingrese la altura y el ancho de su rectangulo\n\n");
	
	printf ("altura: ");
	
	scanf("%f", &alt);
	
	printf("ancho: ");
	
	scanf("%f", &ancho);
	
	printf("\n");
	
	area= calculararea (alt,ancho,area);
	
	printf("Area: %.1f",area);
	
	perimetro= calcularperimetro (alt,ancho,perimetro);
	
	printf("\nPerimetro: %.1f",perimetro);
	
	return 0;
}
float calculararea (float alt, float ancho, float area)
{
	area=alt*ancho;
	
	return area;
}
float calcularperimetro (float alt, float ancho, float perimetro)
{
	perimetro= 2*alt+2*ancho;
	
	return perimetro;
}
