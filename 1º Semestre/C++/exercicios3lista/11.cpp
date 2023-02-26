/*Construa um programa que efetue o cálculo fatorial dos números ímpares
 situados na faixa de 1 a 10.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int c=1, f=1;
	while(c<=10){
		f*=c;
		if(c%2!=0){
		printf("Fatorial %i = %i\n",c,f);
	}
	c++;
	}
}

