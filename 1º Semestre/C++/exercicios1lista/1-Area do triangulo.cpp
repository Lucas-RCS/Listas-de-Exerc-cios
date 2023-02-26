/*Desenvolva um algoritmo que calcule a área de um triângulo. Area=(Base*Altura)/2.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float area, b,a;
	printf("====== Calculo da áreal do triângulo ======");
	printf("\n- Digite o valor da BASE do triângulo:");
	scanf("%f",&b);
	printf("\n- Digite o valor da ALTURA do triângulo:");
	scanf("%f",&a);
	area=(b*a)/2;
	printf("\n- O valor da area do triangulo é %f", area);
}


