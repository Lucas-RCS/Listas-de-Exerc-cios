/*Calcule a �rea de um c�rculo. A �rea de um c�rculo � calculada multiplicando o raio2 por PI (3.14159).*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float a,r, p;
	printf("Digite o valor do raio:\n");
	scanf("%f",&r);
	p=r*r;
	a=p*3.14;
	printf("A �rea do c�rculo �: %.2f",a);
}


