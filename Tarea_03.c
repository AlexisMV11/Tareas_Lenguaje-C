#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int r, tab;
	r = 0;
	
	printf("¿Que tabla de multiplicar necesitas conocer?\n");
	scanf("%i", &tab);
	
	printf("Mostrando tabla de multiplicaion del %i\n", tab);
	for (int i = 0; i <= 10; i++){
		r = tab * i;
		printf ("%i * %i = %i\n", tab, i, r);
	}
	
	
	return 0;
}


//Para i <- 1 Hasta 10 Con paso 1 Hacer
	//r <- tab * i;
//Escribir tab, " * ", i, " = ", r;
//FinPara
