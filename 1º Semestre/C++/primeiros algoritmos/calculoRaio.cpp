#include <stdio.h>
#include <math.h>
main(){
float a,r;
	printf("==================================================================\n");
	printf("========================== Calculos ==============================\n");
	printf ("==================================================================\n");
	printf("Digite o raio:");
	scanf("%f",&r);
	a= pow(r,2)*3.14;
	printf("A area da circuferencia: %2.f",a);
}

