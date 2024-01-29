#include <stdio.h>
#include <math.h>

int main(){
	float a,b,fx,x,dx,area;
	int i,n;
	printf("Ingresa limite inferior: ");
	scanf("%f",&a);
	printf("Ingresa limite superior: ");
	scanf("%f",&b);
	printf("Ingresa numero de franjas: ");
	scanf("%d",&n);
	dx=(a-b)/n;
	x=a;
	fx=1/(pow(x-1,2));
	x=x+dx;

	for(i=2;i<=n;i++){
		fx=fx+2*(1/(pow(x-1,3)));
		x=x+dx;
	}
	fx=fx+(1/(pow(x-1,3)));
	area=(dx/2)*fx;
	printf("Area igual a: %f\n",area);
	return 0;
}

