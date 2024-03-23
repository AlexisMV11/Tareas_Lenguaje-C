#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numero, sumapares, contadorpares;
	numero = 1;
	sumapares = 0;
	contadorpares = 0;
	
	printf("Numeros del 1 al 10:\n");
	do {
		printf("%d ", numero);
		if (numero % 2 == 0) {
			sumapares += numero;
			contadorpares++;
		}
		numero++;
	} while(numero <= 10);
	
	printf("\n");
	
	if (contadorpares > 0) {
		float promedio = (float)sumapares / contadorpares;
		printf("Promedio de los numeros pares: %.2f\n", promedio);
		printf("Numeros pares usados para el promedio: ");
		for (int i = 2; i <= 10; i += 2) {
			printf("%d ", i);
		}
		printf("\n");
	} 
	
	return 0;
}

