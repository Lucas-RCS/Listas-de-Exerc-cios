/*Calcule o �ndice de massa corp�rea (IMC) de uma pessoa. O IMC � calculado dividindo-se o
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
	printf(" Seu indice de massa corp�rea (IMC) �: %.2f", imc);
}


