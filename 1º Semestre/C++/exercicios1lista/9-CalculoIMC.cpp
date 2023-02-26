/*Calcule o índice de massa corpórea (IMC) de uma pessoa. O IMC é calculado dividindo-se o
 peso da pessoa, em kg, pelo quadrado da sua altura, em metros.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float p,a,imc;
	printf("Digite em KG seu peso:\n");
	scanf("%f",&p);
	printf("\nDigite em metros sua altura:\n");
	scanf("%f",&a);
	imc=p/(a*a);
	printf(" Seu indice de massa corpórea (IMC) é: %.2f", imc);
}


