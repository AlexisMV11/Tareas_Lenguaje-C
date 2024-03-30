#include <stdio.h>

void resultados (int num, int suma){
	for (int i = 1; i <= num; i++){
		printf("%d ", i);
		
		if (i % 2 != 0){
			suma += i;
		}
	}
	
	printf("\nLa suma de los números impares es: %d\n", suma);
}

int main(int argc, char *argv[]) {
	
	int num;
	int suma = 0;
	printf("Ingresa un numero: ");
	scanf("%d", &num);
	
	resultados (num, suma);
	return 0;
}

