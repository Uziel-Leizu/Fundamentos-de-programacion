#include <stdio.h>

int main(){
	printf("\nEl tamaño del entero es %ld bytes", sizeof(int));
	printf("\nEl tamaño del short es %ld bytes", sizeof(short));
	printf("\nEl tamaño del long es %ld bytes", sizeof(long));
	printf("\nEl tamaño del char es %ld bytes", sizeof(char));
	printf("\nEl tamaño del float es %ld bytes", sizeof(float));
	printf("\nEl tamaño del double es %ld bytes", sizeof(double));

	return 0;
}
