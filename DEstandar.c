#include <stdio.h>
#include <math.h>

struct est{
	float arreglo[6];
	float prom;
	float de;
	float *ptrAr;
};

int calculo(struct est *ptrF);

int main(){
	struct est var, *ptrS;
	ptrS=&var;
	for(ptrS->ptrAr=ptrS->arreglo;ptrS->ptrAr<=&ptrS->arreglo[5];ptrS->ptrAr++){
		printf("Ingresa Calificacion: ");
		scanf("%f",ptrS->ptrAr);
	}
	calculo(&var);
	printf("El promedio de las 6 calificaciones es: %f y el valor de la desviacion estandar es: %f\n",ptrS->prom,ptrS->de);
	return 0;
}
int calculo(struct est *ptrF){
	float suma=0.0;
	for(ptrF->ptrAr=ptrF->arreglo;ptrF->ptrAr<=&ptrF->arreglo[5];ptrF->ptrAr++)
		suma=suma+*ptrF->ptrAr;
	ptrF->prom=suma/6;
	suma=0.0;
	for(ptrF->ptrAr=ptrF->arreglo;ptrF->ptrAr<=&ptrF->arreglo[5];ptrF->ptrAr++)
		suma=suma+(pow(ptrF->prom-*ptrF->ptrAr,2));
	ptrF->de=pow(suma/((int)(ptrF->ptrAr-ptrF->arreglo)),0.5);
	return 0;
}
