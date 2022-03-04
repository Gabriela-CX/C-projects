#include <stdio.h>
#include <stdlib.h>

/*Creado por Gabriela Ceballos*/

int main(int argc, char *argv[]) {
	
	
	int filas, columnas, espacio, x, mitad_superior, mitad_inferior;
	
	printf("Inserta un numero impar entre 3 y 21: ");
	scanf("%d", &x);
	
	mitad_superior = (x+1)/2;
	mitad_inferior = mitad_superior-1;
	
	if (x<3 || x>21){
		printf("El numero esta fuera del rango solicitado \n");
		
	}
	else if(x % 2 == 0){
		printf("El numero no es impar");		
		
	} else {
		
		for(filas=1; filas<=mitad_superior; filas++){
		for(columnas=1; columnas<=2*x-1; columnas++){
			if (columnas>=x-(filas-1) && columnas<=x+(filas-1)){
				printf("*");
			}
			else 
				printf(" ");
			
		}
		printf("\n");
		}
	
		for(filas=mitad_inferior; filas>=0; filas--){
			for(columnas=1; columnas<=2*x-1; columnas++){
				if (columnas>=x-(filas-1) && columnas<=x+(filas-1)){
					printf("*");
				}
				else 
					printf(" ");
				
			}
			printf("\n");
		}
	}
	
				
	
		
		
	return 0;
}
