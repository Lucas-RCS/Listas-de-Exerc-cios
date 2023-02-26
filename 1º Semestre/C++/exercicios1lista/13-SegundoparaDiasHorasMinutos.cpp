/*13. Elabore um algoritmo que leia uma quantidade de segundos
e transforme este tempo em dias, horas e minutos.
Exemplo: 197820s. Resultado: 2 dias, 6 horas e 57 minutos.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int s, d, h, m;
	printf("Total de segundos: ");
	scanf("%i",&s);
	d=s/86400;
	h=(s%86400)/3600;
	m=((s%86400)%3600)/60;
	printf("\n%i dia(s)",d);
	printf("\n%i hora(s)",h);
	printf("\n%i minuto(s)\n",m);
}


