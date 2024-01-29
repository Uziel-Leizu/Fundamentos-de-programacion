#include <stdio.h>
#include <math.h>

int main(){
	int cal[6],*ptr;
	float suma=0,prom=0,s=0,sumatoria;
	for(ptr=cal;ptr<=&cal[5];ptr=ptr+1){
		printf("Ingresar calificacion: ");
		scanf("%d",ptr);
	}
	for(ptr=cal;ptr<=&cal[5];ptr=ptr+1)
		suma=suma+*ptr;
	prom=suma/(int)(ptr-cal);
	for(ptr=cal;ptr<=&cal[5];ptr=ptr+1)
		sumatoria=sumatoria+(pow(prom-*ptr,2));
//	for(apt=x;apt<=&x[5];apt=apt+1)
//		sumatoria=sumatoria+*apt;
	s=pow(sumatoria/((int)(ptr-cal)),0.5);
	printf("El promedio es: %f\tEl valor de la desviacion estandar es: %f\n",prom,s);
	return 0;
}
