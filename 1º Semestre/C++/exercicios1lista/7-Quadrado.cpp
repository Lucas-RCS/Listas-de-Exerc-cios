/*Construa um algoritmo que o usu�rio entre com um lado de um quadrado e informe:
a. Per�metro: lado * 4
b. �rea: lado2
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
	printf("\nO per�metro do quadrado � de:%.1f", p);
	a=l*l;
	printf("\nA �rea do quadrado �:%.1f", a);
	d=l*sqrt(2);
	printf("\nA diagonal do quadrado �:%.1f", d);
}


