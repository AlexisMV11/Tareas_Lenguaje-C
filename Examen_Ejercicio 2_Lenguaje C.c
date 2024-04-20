#include <stdio.h>

void ImprimirNumeros(int numero);

int main(int argc, char *argv[]) {
	
	int numero;
	
	printf("Ingrese un numero entero positivo: ");
	scanf("%d", &numero);
	
	ImprimirNumeros(numero);
	
	return 0;
}

void ImprimirNumeros(int numero){
	if (numero < 1){
		printf("El numero debe ser positivo");
		return;
	}
	
	for (int i = 1; i <= numero; i++){
		printf("%d\n", i);
	}
}
