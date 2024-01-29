#include <stdio.h>

//ingresar desde el teclado 10 edades de un grupo
//calcular promedio e imprimir en pantalla cada dato
//el indice, valor y direccion

int main(){
	int i, edad[10];
	float suma=0,prom;
	for(i=0;i<10;i++){
		printf("Ingresa edad: ");
		scanf("%d",&edad[i]);
	}
	for(i=0;i<10;i++)
		suma = suma + edad[i];
	prom=suma/i;

	for(i=0;i<10;i++)
		printf("Indice: %d , Valor: %d , Direccion: %p \n",i,edad[i],&edad[i]);
	printf("Promedio: %f\n",prom);
	return 0;
}

