#include <stdio.h>

int main(){
	char cadena[50];
	int i,cont;
	char car;
	printf("Ingresa una cadena: ");
	gets(cadena);
	printf("Ingresa caracter que quieres buscar: ");
	car=getchar();
	cont=0;
	for(i=0;cadena[i]!='\0';i++){
		if(cadena[i]==car){
			cont++;
			printf("hay una %c en la posicion %d \n",car,i);
		}
	}
	printf("Hay %d %c en la cadena principal\n\n",cont,car);
	return 0;
}

