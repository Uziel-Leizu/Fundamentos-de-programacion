#include <stdio.h>

int main(){
	char cad[50],VarAux;
	int i,j;
	printf("Ingresa una cadena: ");
	fgets(cad,50,stdin);
	for(j=0;cad[j]!='\n';j++);
	for(i=0,j=j-1;i<j;i++,j--){
		VarAux=cad[i];
		cad[i]=cad[j];
		cad[j]=VarAux;
	}
	printf("\nla cadena invertida es: %s\n",cad);
	return 0;
}
