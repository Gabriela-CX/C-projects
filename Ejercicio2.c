#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int var_int = 0;
//float var_float = 0.0;
//char var_char = ' ';

//int a;
//float b;

int var_int = '@'; //se puede inicializar en @ ya que al fin y al cabo es un numero
char var_char = 64; //se puede iniciar en un numero ya que este tiene su correspondencia en un simbolo ascii
 
int main(int argc, char *argv[]) {
	
	/*puts("Ingrese un numero entero: ");
	scanf("%d", &var_int);
	puts("Ingrese un caracter: ");
	scanf(" %c", &var_char);*/
	printf("var_int como entero es %d y var_char como caracter es %c\n", var_int, var_char);
	printf("var_int como caracter es %c y var_char como entero es %d", var_int, var_char);	
	printf("Los char se tratan como numeros enteros, entre 0 y 255\n");
	printf("%d\n", (var_char + 6)*4);
	printf("numero %d, %c\n", var_char, var_char);
	//64 es @, si 255 es el maximo, desborde seria 256 + 64 = 320
	var_char = 320;
	// el compilador toma la diferencia, 320-255
	printf("numero %d, %c\n", var_char, var_char);	
	
/*	
	puts("Ingrese un numero entero: ");
	scanf("%d", &a);
	puts("Ingrese un numero flotante: ");
	scanf("%f", &b);
	//Para que la division se haga correctamente tratandose de numeros impares, se debe usar siempre un numero flotante aunque se escriba como entero
	printf("La operacion que se ejecuta da como resultado: %d y %f", a/b, a/b);
	
	printf("int como entero: %d\n", var_int);
	printf("float como flotante: %.1f\n", var_float);
	printf("char como caracter: %c\n", var_char);
	//Yo soy responsable de interpretar la informacion de manera adecuada
	printf("int como flotante: %f\n", var_int);
	printf("float como entero: %d\n", var_float);
	printf("char como flotante %f y como entero %d", var_char, var_char);
	return 0;
	
*/
	//scanf() se usa para recibir cualquier dato
	//scanf("Tipo de dato (%d, %c, %f)", direccion de la variable)
	/*puts("Por favor ingrese un numero entero: ");
	scanf("%d", &var_int);
	puts("Por favor ingrese un numero flotante: ");
	scanf("%f", &var_float);
	puts("Ingrese un caracter: ");
	//Para usar scanf() con %c se debe poner un espacio antes del especificador
	scanf(" %c", &var_char);
	printf("Entero: %d, flotante: %f y caracter: %c", var_int, var_float, var_char);
	*/
}
