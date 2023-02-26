/*6. Escreva um programa que passe pela sequencia de 1000
a 1999. Escreva os valores que dividido por 11 dão resto
igual a 5.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int c=1000;
	while(c<=1999){
	if(c%11==5)
	printf("%i\n",c);
	c++;
	}
}

