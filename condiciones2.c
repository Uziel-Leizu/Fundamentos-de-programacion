#include <stdio.h>

int main(){
	int cal;
	printf("Ingresa un entero de 0 a 10: ");
	scanf("%d",&cal);
	if(cal>=6){
		cal = cal+1;
		printf("Aprobado con %d\n",cal);
	}else{
		cal=cal-1;
		printf("Reprobado con %d\n",cal);
	}
	printf("Sayonara\n");
	return 0;
}
