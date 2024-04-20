#include <stdio.h>

void ImprimirDia(int numero);

int main(int argc, char *argv[]) {

	int numeroDia;
	
	printf("Ingrese un numero del 1 al 7 como representacion de un dia de la semana: ");
	scanf("%d", &numeroDia);
	
	ImprimirDia(numeroDia);
	
	return 0;
}

void ImprimirDia(int numero){
	
	switch (numero){
	case 1:
		printf("Lunes\n");
		break;
	case 2:
		printf("Martes\n");
		break;
	case 3:
		printf("Miercoles\n");
		break;
	case 4:
		printf("Jueves\n");
		break;
	case 5:
		printf("Viernes\n");
		break;
	case 6:
		printf("Sabado\n");
		break;
	case 7:
		printf("Domingo\n");
		break;
	default:
		printf("Numero del dia invalido");
	}
}
