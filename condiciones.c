#include <stdio.h>

//programa de condiciones if

int main(){
	int x=0;
	printf("Ingresa un valor para x: ");
	scanf("%d",&x);
	if(x>5){
		printf("Hola amigo XD \n");
		printf("x: %d es mayor a 5\n",x);
	}else{
		printf("Hola men XD\n");
		printf("x: %d es menor a 5\n",x);
	}
	return 0;
}

