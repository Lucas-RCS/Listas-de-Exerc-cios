/*Desenvolva um algoritmo que calcule a �rea de um tri�ngulo. Area=(Base*Altura)/2.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float area, b,a;
	printf("====== Calculo da �real do tri�ngulo ======");
	printf("\n- Digite o valor da BASE do tri�ngulo:");
	scanf("%f",&b);
	printf("\n- Digite o valor da ALTURA do tri�ngulo:");
	scanf("%f",&a);
	area=(b*a)/2;
	printf("\n- O valor da area do triangulo � %f", area);
}


