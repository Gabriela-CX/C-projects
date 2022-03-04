#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
// Definiciones generales o macros (en MAYUSCULA).
#define TAM 5
#define BUFFER 20
// Declaración de variables globales.
char palabra_1[] = "Thor", palabra_2[] = "Loki", palabra_3[] = "Winter Soldier",
palabra_4[] = "Black Widow", palabra_5[] = "Tony Stark";
// Declaro un arreglo de apuntadores a caracter. Almacena la dirección de las cadenas.
char *palabras[TAM] = {palabra_1, palabra_2, palabra_3, palabra_4, palabra_5};
char* pPosition;
char adivina[BUFFER] = {};
char aleatorio = 0, i = 0, letra = 0, intentos = 5, longitud, j;
FILE *archivo;

int main(int argc, char *argv[]) {
	srand(time(0));
	// Impresión de palabra aleatoria del arreglo palabras[].
	aleatorio = rand() % TAM;
	for (j=0;j<strlen(palabras[aleatorio]); j++){
		if (palabras[aleatorio][j]!= ' '){
			longitud++;
		}
	}
	printf("Palabra: %s\n", palabras[aleatorio]);
	archivo = fopen("Juego.txt", "a");
	puts("Ingrese su nombre:");
	scanf("%s", adivina);
	fprintf(archivo, "%s", adivina);
	fprintf(archivo, " ");
	do{
		puts("Ingrese una letra:");
		fflush(stdin);
		letra = getchar();
		// Revisión de letra en la palabra a adivinar, 1 si está y 0 si no.
		// Mientras el caracter de la palabra sea diferente de final de candena.
		pPosition = strchr(palabras[aleatorio], letra);
	while(palabras[aleatorio][i] != '\0'){
		if((tolower(letra) == palabras[aleatorio][i]) || (toupper(letra) == palabras[aleatorio][i]) ){
		adivina[i] = 1;
		longitud--;
		}
		++i;
	}
	if (pPosition == NULL){
		--intentos;
	}
	i = 0;
	puts("");
	// Impresión de la palabra parcial.
	while(palabras[aleatorio][i] != '\0'){
		if(adivina[i] == 1){
		printf("%c", palabras[aleatorio][i]);
		}
		else if(palabras[aleatorio][i] == ' '){
		printf(" ");
		}
		else{
		printf("-");
		}
		++i;
	}
	i = 0;
	puts("");
	printf("Intentos: %d .", intentos);
	printf("Longitud sobrante: %d .", longitud);
	}while(intentos>0 && longitud!=0);
	fprintf(archivo, "%s", palabras[aleatorio]);
	fputc('\n', archivo);
	fclose(archivo);
	puts("Tabla de jugadores y sus palabras.");
	archivo = fopen("Juego.txt", "r");
	while((letra = fgetc(archivo)) != EOF){
	    printf("%c", letra);
	}
	fclose(archivo);
	
	
	
return 0;
}
