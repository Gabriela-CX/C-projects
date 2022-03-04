#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Creado por Gabriela Ceballos */

int main(int argc, char *argv[]) {
	
	int numeroJugador;
	int nroIntentos;
	int numeroAzar;
	int respuesta;
	srand(time(NULL));
	
	numeroAzar=rand()%100+1;
	printf("Numero aleatorio acotado entre 0 y 100: %d\n", numeroAzar);
	
	printf("Inserta un numero al azar del 1 al 100: ");
	scanf("%d", &numeroJugador);
		
	
	while(1){
		nroIntentos ++;
		
		if(numeroJugador<numeroAzar){
		printf("Tu numero es menor al numero a adivinar. Intentalo nuevamente: ");
		scanf("%d", &numeroJugador);
		} else if (numeroJugador>numeroAzar){
			printf("Tu numero es mayor al numero a adivinar. Intentalo nuevamente: ");
			scanf("%d", &numeroJugador);
		} else if (numeroJugador==numeroAzar){
			printf("Haz adivinado el numero. Felicitaciones\n");
			printf("Tus intentos de adivinacion fueron: %d\n", nroIntentos);
			printf("Desea volver a jugar\? Si es asi digite el numero 1, de lo contrario el numero 2: ");
			scanf("%d", &respuesta);
			if (respuesta==1){
				nroIntentos = 0;
				numeroAzar=rand()%100+1;
				printf("Numero aleatorio acotado entre 0 y 100: %d\n", numeroAzar);
				
				printf("Inserta un numero al azar del 1 al 100: ");
				scanf("%d", &numeroJugador);
				continue;	
			} else {
				break;
			}
		break;
		}
	
	}
	
	

	

	
	return 0;
}
