/* A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros.
 Fa�a um algoritmo que receba um valor de uma compra e mostre o valor das presta��es.*/
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
	printf("\nValor das presta��es: R$ %.2f\n",prest);
}


