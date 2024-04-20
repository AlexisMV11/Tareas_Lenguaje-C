#include <stdio.h>

char obtenerCalificacion(int calificacion);

int main(int argc, char *argv[]) {
	
	int calificacion;
	
	printf("Ingrese la calificacion del estudiante: ");
	scanf("%d", &calificacion);
	
	char calificacionLetra = obtenerCalificacion(calificacion);
	
	printf("La calificacion final es: %c\n", calificacionLetra);
	
	return 0;
}

char obtenerCalificacion(int calificacion){
	char calificacionLetra;
	
	if (calificacion >= 90){
		calificacionLetra = 'A';
	} else if (calificacion >= 80 && calificacion <= 89){
		calificacionLetra = 'B';
	} else if (calificacion >= 70 && calificacion <= 79){
		calificacionLetra = 'C';
	} else if (calificacion >= 60 && calificacion <= 69){
		calificacionLetra = 'D';
	} else {
		calificacionLetra = 'F';
	}
	
	return calificacionLetra;
	
}
	
