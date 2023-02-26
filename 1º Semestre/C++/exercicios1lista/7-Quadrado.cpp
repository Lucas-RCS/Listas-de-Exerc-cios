/*Construa um algoritmo que o usuário entre com um lado de um quadrado e informe:
a. Perímetro: lado * 4
b. Área: lado2
c. Diagonal: lado * (21/2)*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float p,a,d,l;
	printf("Digite o valor do lado do quadrado:\n");
	scanf("%f",&l);
	p=l*4;
	printf("\nO perímetro do quadrado é de:%.1f", p);
	a=l*l;
	printf("\nA área do quadrado é:%.1f", a);
	d=l*sqrt(2);
	printf("\nA diagonal do quadrado é:%.1f", d);
}


