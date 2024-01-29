#include <stdio.h>
#include <math.h>

int main (){
	float dx, fx, x, suma, a, b;
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
		if(i==0 || i==n)
			fx=fx+(exp(pow(x,2)));
		else
			if(i%2==0)
				fx=fx+(2*(exp(pow(x,2))));
			else
				fx=fx+(4*(exp(pow(x,2))));
		x=x+dx;
	}
	suma= (dx/3)*fx;
	printf("El resultado del area bajo la curva es: %f \n",suma);
	return 0;
}
