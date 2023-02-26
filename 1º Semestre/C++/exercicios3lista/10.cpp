/*10. Construa um programa que efetue o cálculo fatorial de
um número (N) que o usuário irá digitar. Exemplo: Fatorial do
número 5. 5!=5x4x3x2x1=120.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int n, c=1, fat=1;
	printf("Valor: ");
	scanf("%i",&n);
	while(c<=n){
		fat*=c;
		c++;
	}
	printf("\nFatorial %i = %i\n",n,fat);
}

