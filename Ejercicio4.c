#include <stdio.h>
#include <stdlib.h>
#define BUFFER 100

int var = 3, *apu_var = 0;

int main(int argc, char *argv[]) {
	
	apu_var = &var;
	
	printf("En la direccion %d ", apu_var);
	printf("esta el valor %d. \n", var);
	printf("apu_var esta en la direccion %d. \n", &apu_var);
	printf("&var y apu_var contienen el mismo numero: %d y %d.", &var, apu_var);
	
	return 0;
}
