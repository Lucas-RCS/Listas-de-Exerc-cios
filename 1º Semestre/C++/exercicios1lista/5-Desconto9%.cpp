/*Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. 
Faça um algoritmo que receba o valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float vi, vd, vf;
	printf("Valor do produto:");
	scanf("%f",&vi);
	vd=vi*0.09;
	vf=vi-vd;
	printf("O novo valor do produto com desconto é %.2f",vf);
	//9% = 0,09
}


