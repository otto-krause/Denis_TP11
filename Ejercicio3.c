#include <stdio.h>
#include <stdlib.h>

float postularhombres (float porcentaje1,int hombre, int mujer);

float postularmujeres (float porcentaje2,int hombre, int mujer);
int main()
{
	int mujer, hombre;
	float porcentaje1=0, porcentaje2=0;
	printf ("Ingrese la cantidad de mujeres y hombres\n");
	printf("Mujeres: ");
	
	scanf ("%d",&mujer);
	
	printf("Hombres:");
	scanf ("%d",&hombre);
	
	porcentaje1= postularhombres(porcentaje1, hombre, mujer);
	
	printf ("\n El porcentaje de Hombres postulados es: %.2f", porcentaje1);
	
	printf(" por ciento",porcentaje1);
	
	porcentaje2= postularmujeres (porcentaje2,hombre,mujer);
	
	printf ("\n El porcentaje de Mujeres postuladas es: %.2f", porcentaje2);
	
	
	printf(" por ciento",porcentaje2);
	return 0;
}
float postularhombres (float porcentaje1,int hombre, int mujer)
{
	porcentaje1=hombre*100/(hombre+mujer);
	return porcentaje1;
}
float postularmujeres (float porcentaje2,int hombre, int mujer)
{
	porcentaje2 =mujer*100/ (hombre+mujer);
	return porcentaje2;
}
