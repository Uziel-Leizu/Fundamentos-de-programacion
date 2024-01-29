#include <stdio.h>

int main(){
	char cad[50],*ptri,*ptrj;
	int band=1;
	printf("Ingresa una cadena: ");
	gets(cad);
	for(ptrj=cad;*ptrj!='\0';ptrj=ptrj+1);
	for(ptrj=ptrj-1,ptri=cad;ptri<ptrj;ptrj=ptrj-1,ptri=ptri+1)
		if(*ptri!=*ptrj){
			band=0;
			break;
		}
	if(band==1)
		printf("\n %s es un palindromo\n",cad);
	else
		printf("\n %s no es un palindromo\n",cad);
	return 0;
}
