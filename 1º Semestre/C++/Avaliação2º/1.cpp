/*1.(2,5)Os   bancos   disponibilizaram   uma   lista   de   
aplica��es   com   rendimentos interessantes.  Jos�  ficou  
interessando  em  um  investimento  com  rendimento  de 3,75% 
 ao  m�s  e  quer  saber  quantos  meses  ser�o  necess�rios  
 para  que  o  capital investido dobre de valor. 
Desenvolva um programa que solicite o valor investido e seu  
programa  calcule,  iterativamente,  a  quantidade  de  meses  
necess�rio  para dobrar o investimento.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float A, B, C=0;
	printf("Valor: ");
	scanf("%f", &A);
	B = A;
	while (A<(B*2)){
		A+=A*0.0375;
		C++;
	}
	printf("\nQuantidade meses: %.f", C);
}

