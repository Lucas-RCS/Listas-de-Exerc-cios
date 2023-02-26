/*12. Construa um algoritmo para ler uma temperatura em graus
Fahrenheit, calcular e escrever o valor correspondente em graus
Celsius: 5 / 9 * (F – 32).*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float f, c;
	printf("Temperatura em ºF: ");
	scanf("%f",&f);
	c=5.0/9*(f-32);
	printf("\nTemperatura em ºC: %.2f\n",c);
}


