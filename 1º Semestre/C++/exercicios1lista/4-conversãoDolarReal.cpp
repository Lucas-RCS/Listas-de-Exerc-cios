/*Faça um algoritmo que calcule o valor em reais, correspondente aos dólares que um turista possui no cofre do hotel.
 O programa deve solicitar os seguintes dados: Quantidade de dólares guardados no cofre e cotação do dólar naquele dia.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float d, r;
	printf("Digite a quantidade de dólares você possui:\n");
	scanf("%f",&d);
	r=d*5.62;
	printf("Você tem R$%2.f",r);
}


