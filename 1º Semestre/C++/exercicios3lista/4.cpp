/*4. Fa�a um programa que leia v�rios n�meros inteiros e
calcule o somat�rio dos n�meros negativos. O fim da leitura
ser� indicado pelo n�mero 0.*/
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

