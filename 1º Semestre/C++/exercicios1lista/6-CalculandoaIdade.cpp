/*Fa�a um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
A idade dessa pessoa; E quantos anos ela ter� em 2028.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float n, a, idade, idadef;
	printf("Digite o Ano de seu nascimento:\n");
	scanf("%f", &n);
	printf("\nDigite o ano que voc� est�:\n");
	scanf("%f",&a);
	idade=a-n;
	idadef=2028-n;
	printf("Voc� tem %.f", idade);
	printf("\nEm 2028 voc� ter� %.f", idadef);
}


