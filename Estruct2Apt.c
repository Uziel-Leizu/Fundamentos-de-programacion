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
	struct alumno arreglo[5],*Alapt;

	for(Alapt=arreglo;Alapt<=&arreglo[4];Alapt++){
		setbuf(stdin,NULL);
		printf("Ingresa nombre: ");
		gets(Alapt->nombre);
		setbuf(stdin,NULL);
		printf("Ingresa edad: ");
		scanf("%d",&Alapt->edad);
		setbuf(stdin,NULL);
		printf("Ingresa estatura: ");
		scanf("%f",&Alapt->est);
		setbuf(stdin,NULL);
		printf("Ingresa sexo: ");
		Alapt->sexo=getchar();
		getchar();
		setbuf(stdin,NULL);
		system("clear");
	}
	for(Alapt=arreglo;Alapt<=&arreglo[4];Alapt++){
		printf("Alumno: %d\n\n",(int)((Alapt-arreglo+1)));
		printf("Nombre: %s\tMemoria: %p\n",Alapt->nombre,&Alapt->nombre);
		printf("Edad: %d\tMemoria: %p\n",Alapt->edad,&Alapt->edad);
		printf("Estatura %f\tMemoria %p\n",Alapt->est,&Alapt->est);
		printf("sexo %c\tMemoria: %p\n\n",Alapt->sexo,&Alapt->sexo);
	}
	return 0;
}
