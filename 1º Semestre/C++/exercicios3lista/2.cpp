/*2. Construa um programa que leia 5 valores e conte
quantos destes valores são divisíveis por 3, escrevendo
esta informação.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
int c=1, n, qn=0;
	while(c<=5){
		printf("Número %i: ",c);
		scanf("%i",&n);
		if(n%3==0)
		qn++;
		c++;
	}
printf("\nQtde. div. por 3: %i\n",qn);
}
