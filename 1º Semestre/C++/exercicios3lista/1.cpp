/*1. Construa um programa que leia 5 valores e conte
quantos destes valores s�o negativos, escrevendo esta informa��o*/
#include<stdio.h>
#include <math.h>
#include <locale.h>
main(){
	setlocale(LC_ALL," ");
int c=1, n, qn=0;
	while(c<=5){
		printf("N�mero %i: ",c);
		scanf("%i",&n);
		if(n<0)
		qn++;
		c++;
	}	
printf("\nQtde. negativos: %i\n",qn);
	}
