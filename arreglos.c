#include <stdio.h>

int main(){
	char cadena[50];
	int i,i2;
	printf("Ingresa una cadena: ");
	gets(&cadena[0]);
	printf("La cadena ingresada es: %s \n",cadena);
	printf("Cadena caracter por caracter: \n");
	for(i=0;cadena[i]!='\0';i++)
		printf("\n%c",cadena[i]);
	printf("\n\nCadena caracter por caracter inverso\n");
	for(i2=0;cadena[i]!='\0';i++);
	for(i2=i-1;i2>=0;i2--)
		printf("\n%c",cadena[i2]);
	return 0;
}

