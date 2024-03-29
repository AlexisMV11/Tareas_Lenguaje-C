#include <stdio.h>

// Prototipos de las funciones
int suma(int a, int b);
float calcular_promedio(int total);
void imprimir_resultados(int num1, int num2, float promedio, char nombre[]);

int main(int argc, char *argv[]) {
	int num1, num2;
	char nombre[100];
	
	// Se solicita al usuario que ingrese su primer nombre
	printf("Por favor, ingresa tu primer nombre: ");
	scanf("%s", nombre);
	
	// Se solicita al usuario que ingrese dos números enteros
	printf("Ingrese el primer número entero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo número entero: ");
	scanf("%d", &num2);
	
	// Se calcula la suma de los dos números
	int total = suma(num1, num2);
	
	// Se calcula el promedio de la suma
	float promedio = calcular_promedio(total);
	
	// Se imprimen los resultados
	imprimir_resultados(num1, num2, promedio, nombre);
	
	return 0;
}

// Función para sumar dos números enteros
int suma(int a, int b) {
	return a + b;
}

// Función para calcular el promedio
float calcular_promedio(int total) {
	return total / 2.0; // Dividir por 2.0 para obtener un resultado de punto flotante
}

// Función para imprimir los resultados
void imprimir_resultados(int num1, int num2, float promedio, char nombre[]) {
	printf("\nResultados:\n");
	printf("Primer número: %d\n", num1);
	printf("Segundo número: %d\n", num2);
	printf("Promedio: %.2f\n", promedio); // Limitar el resultado del promedio a dos decimales
	printf("Tu nombre: %s\n", nombre);
}

