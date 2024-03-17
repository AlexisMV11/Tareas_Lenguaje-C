#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n1, n2, n3;
	
	printf ("Ingresa 3 numeros enteros \n");
	scanf ("%d %d %d", &n1, &n2, &n3);
	
	if (n1 > n2 && n1 > n3) {
		printf ("El primer numero es mayor");
	}
	else if (n2 > n1 && n2 > n3) {
		printf ("El segundo numero es mayor");
	}
	else if (n3 > n1 && n3 > n2) {
		printf ("El tercer numero es mayor");
	}
	else if (n1 == n2 && n1 == n3) {
		printf ("Los tres numeros son iguales o nulos");
	}
	
	
	return 0;
}

