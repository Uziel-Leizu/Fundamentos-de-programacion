#include <stdio.h>

int main(){
	char cad[50];
	int i,j,band=1;
	printf("Ingresa una cadena: ");
	gets(cad);
	for(j=0;cad[j]!='\0';j++);
	for(i=0,j=j-1;i<j;i++,j--)
		if(cad[i]!=cad[j]){
			band=0;
			break;
		}

	if(band==1)
		printf("\n %s es un palindromo\n",cad);
	else
		printf("\n %s no es un palindromo\n",cad);
	return 0;
}
