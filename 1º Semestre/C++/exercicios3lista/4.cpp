/*4. Faça um programa que leia vários números inteiros e
calcule o somatório dos números negativos. O fim da leitura
será indicado pelo número 0.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int n, totneg=0;
	do{
		printf("Valor: ");
		scanf("%i",&n);
		if(n<0)
		totneg+=n;
	}while(n!=0);
	printf("\nSoma negativos: %i\n",totneg);
}

