#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/* Usamos el comando 'system' para iniciar una pagina web en el sistema o abrir un archivo
	system("start http://google.com");*/
	
	/*printf() muestra informacion en consola. tambien sirve para dar informacion numerica (no se necesita concatenar cadenas)
	\n se usa para dar saltos de linea
	printf("Sup?\n");
	printf("Nothing"); */
	
	printf("Un numero entero se ubica con %d\n", 4+8);
	//Para limitar el numero de digitos decimales utilizo %.xf, para x como el numero de cifras
	printf("Un numero flotante se ubica con %.1f\n", 6.9);
	//Los caracteres siempre deben ir entre comillas sencillas
	printf("Un caracter se ubica con %c\n", '&');
	printf("Una cadena de texto se ubica con %s", "Cadena de texto\n");
	// \b es un retroceso del cursor en la impresion (borrar)
	printf("Siempre \bpegado \n");
	// \t agrega una tabulacion en texto
	printf("Siempre\t separado \n");
	// \a es la campana con un sonido del sistema
	printf("\a");
	//Para imprimir comillas o barra inclinada debo hacer uso de un \ previo
	printf("Hola, como estas. \"Bien\"\n");
	printf("\\, \' \n");
	//puts() sirve igual que printf(), solo que involucra el \n y solo imprime texto
	puts("Solo texto");

	
	return 0;
}
