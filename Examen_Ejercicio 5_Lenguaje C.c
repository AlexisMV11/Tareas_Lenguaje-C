#include <stdio.h>

void ordenAsendente (int array[], int n);
void ordenDesendente (int array[], int n);

int main(int argc, char *argv[]) {
	
	int array[] = {23, 4, 1, 44, 55};
	int n = sizeof(array) / sizeof(array[0]);
	int suma = 0;
	
	for (int i = 0; i < n; i++){
		suma += array[i];
	}
	
	if (suma % 2 == 0){
		ordenAsendente (array, n);
		printf("Suma par: ");
	} else{
		ordenDesendente (array, n);
		printf("Suma impar: ");
	}
	
	for (int i = 0; i < n; i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}

void ordenAsendente (int array[], int n){
	int temp;
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-i-1; j++){
			if (array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

void ordenDesendente (int array[], int n){
	int temp;
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-i-1; j++){
			if (array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
