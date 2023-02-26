#include <stdio.h>
#include <stdlib.h>
/*Exercicio 20 lista 2  */
main(){
	float a,b,c,ab,ac,bc;
	
	printf("Lado A do triangulo: ");
	scanf("%f",&a);
	
	printf("Lado B do triangulo: ");
	scanf("%f",&b);
	
	printf("Lado C do triangulo: ");
	scanf("%f",&c);
	
	if(a==b && b==c)
		printf("Triangulo equilatero\n");
	else if(a==b && b!=c)
		printf("Triangulo Isoceles\n");
	else if(a!=b && b==c)
		printf("Triangulo Isoceles\n");
	else if(a!=c && b==c)
		printf("Triangulo Isoceles\n");
	else if(a!=b && b!=c)
		printf("Triangulo Escaleno\n");
	else if(a!=c && b!=c)
		printf("Triangulo Escaleno\n");
	else
	 	printf("Numero invalido\n");
	
	ab=a+b;
	ac=a+c;
	bc=b+c;
	
	printf("Soma de A+B: %f\n",ab);
	printf("Soma de A+C: %f\n",ac);
	printf("Soma de C+B: %f\n",bc);
		 							
}
