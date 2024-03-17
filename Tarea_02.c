#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i, suma;
	i = 1;
	suma = 0;	
	
	printf("Secuencia del 1 al 5:\n");
	while (i <= 5) {
		printf("%d\n", i);
		if (i % 2 == 0) { 
			suma += i;
		}
		i++;
	}
	
	printf("La suma de los números pares entre 1 y 5 es: %d\n", suma);
	
	
	return 0;
}

