/*10. Construa um programa que efetue o c�lculo fatorial de
um n�mero (N) que o usu�rio ir� digitar. Exemplo: Fatorial do
n�mero 5. 5!=5x4x3x2x1=120.*/
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

