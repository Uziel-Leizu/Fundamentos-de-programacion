#include <stdio.h>
#include <stdlib.h>

struct alumno{
	char nombre[30];
	char apellido[30];
	int edad;
	char sexo;
	float estatura;
};

int main(){
	system("clear");
	struct alumno Al,*Alptr;
	Alptr = &Al;
	printf("Ingresa Nombre del alumno: ");
	gets(Alptr->nombre);
	printf("Ingresa Apellido del alumno: ");
	gets(Alptr->apellido);
	printf("Ingresa la Edad del alumno: ");
	scanf("%d",&Alptr->edad);
	printf("Ingresa Sexo del alumno: ");
	setbuf(stdin,NULL);
	Alptr->sexo=getchar();
	setbuf(stdin,NULL);
	printf("Ingresa Estatura del alumno: ");
	scanf("%f",&Alptr->estatura);
	printf("La direccion de inicio de Al es: %p\n",Alptr);
	printf("La instancia nombre tiene: %s y esta en: %p\n",Alptr->nombre,&Alptr->nombre);
	printf("La instancia apellido tiene: %s y esta en: %p\n",Alptr->apellido,&Alptr->apellido);
	printf("La instancia edad tiene: %d y esta en: %p\n",Alptr->edad,&Alptr->edad);
	printf("La instancia sexo tiene: %c y esta en: %p\n",Alptr->sexo,&Alptr->sexo);
	printf("La instancia estatura tiene: %f y esta en: %p\n",Alptr->estatura,&Alptr->estatura);

	return 0;
}
