#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Biblioteca de time.h
//Generacion de numeros MIN y MAX inclusive.

// Definiciones generales o macros en MAYUSCULAS.
#define MIN 2
#define MAX 7
#define TAM 10

// Declaracion de variables globales.

// Declaracion de funciones.
void llenar_arreglo(int arreglo[], int minimo, int maximo);

int main(int argc, char *argv[]) {
	
	//Generacion de la semilla para el numero aleatorio.
	srand(time(0)); // (time(0)) se refiere al tiempo del sistema (hora). por eso siempre habrá aleatorios, porque el numero se genera a partir de horas diferentes
	//Para obtener numeros entre MIN y MAX se debe operar asi.
	//(rand() % intervalo) + MIN;
	//intervalo = (MAX - MIN + 1);
	for (i = 0; i < TAM; ++i){
		printf("%d ", (rand() % (MAX - MIN + 1)) + MIN);
	}
	
	/*Para obtener numeros entre 0 y 9 se debe operar asi.
	rand() % TAM para TAM.
	for (i = 0; i < TAM; ++i){
		printf("%d ", rand() % TAM);
	} */
	return 0;
}

// Cuerpo de las funciones.
void llenar_arreglo(int arreglo[], int minimo, int maximo){
	int i = 0;
}

