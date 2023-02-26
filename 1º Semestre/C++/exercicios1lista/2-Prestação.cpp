/* A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros.
 Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float vc, prest;
	printf("Valor da compra: ");
	scanf("%f",&vc);
	prest=vc/5;
	printf("\nValor das prestações: R$ %.2f\n",prest);
}


