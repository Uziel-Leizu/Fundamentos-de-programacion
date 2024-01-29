#include <stdio.h>

int main(){
	char cad1[50],cad2[50];
	int i,j;
	printf("Ingrese cadena 1: ");
	gets(cad1);
	printf("Ingrese cadena 2: ");
	gets(cad2);
	printf("\n\n %s, %s",cad1,cad2);
	for(i=0;cad1[i]!='\0';i++);
	for(j=0;cad2[j]!='\0';j++,i++)
		cad1[i]=cad2[j];
	cad1[i]='\0';
	printf("\n\nCadena concatenada: %s\n\n",cad1);
	return 0;
}
