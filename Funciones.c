#include <stdio.h>

int  suma(int a,int b);

int main(){
	int x,y,z;
	printf("Ingresa el primer sumando: ");
	scanf("%d",&x);
	printf("Ingresa el segundo sumando: ");
	scanf("%d",&y);
	z=suma(x,y);
	printf("La suma de %d y %d es: %d\n",x,y,z);
	return 0;
}

int suma(int a,int b){
	int c;
	c = a+b;
	return c;
}
