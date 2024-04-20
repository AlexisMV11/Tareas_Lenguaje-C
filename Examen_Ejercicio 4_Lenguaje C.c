#include <stdio.h>

void esPar(int numero);

int main(int argc, char *argv[]) {
	
	int numero;
	
	do {
		printf("Ingresa un numero entero positivo: ");
		scanf("%d", &numero);
		
		esPar(numero);
	} while(numero % 2 != 0);
	
	return 0;
}

void esPar(int numero){
	if (numero % 2 == 0){
		printf("¡El numero par ingresado!\n");
	} else{
		printf("Numero impar ingresado. Intentalo de numero.\n");
	}
}
