/*Fa�a um algoritmo que calcule o valor em reais, correspondente aos d�lares que um turista possui no cofre do hotel.
 O programa deve solicitar os seguintes dados: Quantidade de d�lares guardados no cofre e cota��o do d�lar naquele dia.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float d, r;
	printf("Digite a quantidade de d�lares voc� possui:\n");
	scanf("%f",&d);
	r=d*5.62;
	printf("Voc� tem R$%2.f",r);
}


