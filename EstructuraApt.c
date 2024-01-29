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
	struct alumno Al,*ptrAl;
	ptrAl=&Al1;
	printf("Ingresa Nombre del alumno: ");
	gets(Al.nombre);
	printf("Ingresa Apellido del alumno: ");
	gets(Al.apellido);
	printf("Ingresa la Edad del alumno: ");
	scanf("%d",&Al.edad);
	printf("Ingresa Sexo del alumno: ");
	setbuf(stdin,NULL);
	Al.sexo=getchar();
	setbuf(stdin,NULL);
	printf("Ingresa Estatura del alumno: ");
	scanf("%f",&Al.estatura);
	printf("La instancia nombre tiene: %s y esta en: %p\n",Al.nombre,&Al.nombre);
	printf("La instancia apellido tiene: %s y esta en: %p\n",Al.apellido,&Al.apellido);
	printf("La instancia edad tiene: %d y esta en: %p\n",Al.edad,&Al.edad);
	printf("La instancia sexo tiene: %c y esta en: %p\n",Al.sexo,&Al.sexo);
	printf("La instancia estatura tiene: %f y esta en: %p\n",Al.estatura,&Al.estatura);

	return 0;
}

