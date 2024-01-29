#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

struct alumno{
	char nombre[30];
	int edad;
	float est;
	char sexo;
};

int main(){
	system("clear");
	struct alumno arreglo[5];
	int i;

	for(i=0;i<5;i++){
		setbuf(stdin,NULL);
		printf("Ingresa nombre: ");
		gets(arreglo[i].nombre);
		setbuf(stdin,NULL);
		printf("Ingresa edad: ");
		scanf("%d",&arreglo[i].edad);
		setbuf(stdin,NULL);
		printf("Ingresa estatura: ");
		scanf("%f",&arreglo[i].est);
		setbuf(stdin,NULL);
		printf("Ingresa sexo: ");
		arreglo[i].sexo=getchar();
		getchar();
		setbuf(stdin,NULL);
		system("clear");
	}
	for(i=0;i<5;i++){
		printf("Alumno:\n\n");
		printf("Nombre: %s\tMemoria: %p\n",arreglo[i].nombre,&arreglo[i].nombre);
		printf("Edad: %d\tMemoria: %p\n",arreglo[i].edad,&arreglo[i].edad);
		printf("Estatura %f\tMemoria %p\n",arreglo[i].est,&arreglo[i].est);
		printf("sexo %c\tMemoria: %p\n\n",arreglo[i].sexo,&arreglo[i].sexo);
	}
	return 0;
}
