#include <stdio.h>

/*char arreglo[30]; se le conoce como cadena de caracteres
siempre debe terminar con el simbolo '\0' conocido como terminador de cadena
para este caso se puede ingresar e imprimir todo el arreglo de una sola vez
se usa la funcion gets(nomredelarreglo) o gets(&nombredelarreglo[0])
para imprir usamos printf usando formato %s
tambien se puede usar el arreglo caracter por caracter pero colocando el terminador
"\0" de forma explicita

ingresar del teclado una cadena y escribirla en pantalla y tambien la misma cadena
a partir de la posicion 5*/

int main(){
	char cadena[30];
	printf("ingresa cadena: ");
	gets(cadena);
	printf("La cadena que metio es %s\n",cadena);
	printf("Otra forma es %s \n",&cadena[4]);
	return 0;
}
