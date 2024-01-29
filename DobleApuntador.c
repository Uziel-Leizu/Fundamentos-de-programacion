#include <stdio.h>

int main(){
	int arreglo[5];
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	ptr1=&arreglo[0];
	ptr2=&ptr1;
	for(ptr3=&ptr2;**ptr3<=&arreglo[4];(**ptr3)++){ //Primero pide el contenido y despues lo incrementa
		printf("Ingresa un entero: ");
		scanf("%d",**ptr3);
	}
	ptr1=arreglo;
	ptr2=&ptr1;
	for(ptr3=&ptr2;**ptr3<=&arreglo[4];(**ptr3)++)
		printf("\nEn la celda: %d el valor: %d en la %p\n\n",(int)(**ptr3-arreglo),***ptr3,**ptr3);
	return 0;
}

