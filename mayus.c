#include <stdio.h>

int main(){
	char cad[50];
	int i;
	printf("Ingresa una cadena: ");
	gets(cad);
	for(i=0;cad[i]!='\0';i=i+1){
		if(cad[i]>=65 && cad[i]<=90)
			cad[i]=cad[i]+32;
	}
	printf("La cadena es: %s\n",cad);
}
