#include <stdio.h>
#include <math.h>

int main (){
	float dx, fx, x, suma, a, b, op=0;
	int n,i;
	printf("Ingresa limite superior: ");
	scanf("%f",&b);
	printf("Ingresa limite inferior: ");
	scanf("%f",&a);
	printf("Ingresa el numero de particiones ");
	scanf("%d",&n);
	if(n%2!=0)
		n=n+1;
	dx=((b-a)/n);
	x=a;
	for(i=0;i<=n;i++){
		op=0;
		op=(exp(pow(x,2)));
		if(i==0 || i==n)
			fx=fx+op;
		else
			if(i%2==0)
				fx=fx+(2*op);
			else
				fx=fx+(4*op);
		x=x+dx;
	}
	suma= (dx/3)*fx;
	printf("El resultado del area bajo la curva es: %f \n",suma);
	return 0;
}
