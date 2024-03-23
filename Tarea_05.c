#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int saldo = 3000;
	int opcion;
	int cantidad;
	
	do {
		printf("\n*** Menú ***\n");
		printf("1. Retirar dinero\n");
		printf("2. Abonar dinero\n");
		printf("3. Salir\n");
		printf("Seleccione una opción: ");
		scanf("%d", &opcion);
		printf("**************\n\n");
		
		switch (opcion) {
		case 1:
			printf("Ingrese la cantidad a retirar: ");
			scanf("%d", &cantidad);
			if (cantidad > saldo) {
				printf("Saldo insuficiente.\n");
			} else {
				saldo -= cantidad;
				printf("Se retiraron $%d pesos.\n", cantidad);
			}
			break;
		case 2:
			printf("Ingrese la cantidad a abonar: ");
			scanf("%d", &cantidad);
			saldo += cantidad;
			printf("Se abonaron $%d pesos.\n", cantidad);
			break;
		case 3:
			printf("Saliendo del programa...\n");
			break;
		default:
			printf("Opción inválida. Por favor, seleccione una opción válida.\n");
		}
		
		printf("Saldo actual: $%d\n", saldo);
	} while (opcion != 3);
	
	return 0;
}

