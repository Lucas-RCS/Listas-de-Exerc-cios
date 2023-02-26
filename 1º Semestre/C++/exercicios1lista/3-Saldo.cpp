/*Construa um algoritmo que solicite o saldo de uma aplicação e mostre o saldo reajustado, com acréscimo de 7,5%.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float s, sr;
	printf("Saldo: ");
	scanf("%f",&s);
	sr=s*1.075; // s*7.5/100+s;
	printf("\nSaldo reajustado: R$ %.2f\n",sr);
	// S + 7.5%
	// 1 + 0.075 = 1.075
}


