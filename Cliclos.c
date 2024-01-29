#include <stdio.h>

int main(){
	int i;
	int num[255];
	for(i=0;i<100;i++){
		printf("Ingresa un numero entero");
		scanf("%d",&num[i]);
		if(num[i]<0)
			break;
	}
	for(i=0;i<num.size();i++){
		printf("Numero: ",num[i]);
	}
}

