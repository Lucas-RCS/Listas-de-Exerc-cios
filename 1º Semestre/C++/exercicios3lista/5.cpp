/*5. Construa um programa que apresente os resultados de
uma tabuada de um n�mero (N) qualquer que o usu�rio ir�
digitar, a qual deve ser impressa da seguinte forma.
Considerando como exemplo o n�mero 2.
2 x 1 = 2
2 x 2 = 4
(�)
2 x 10 = 20 */
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int c=1, n;
	printf("Numero: ");
	scanf("%i",&n);
	while(c<=10){
	printf("%i x %i = %i\n", n, c, n*c);
	c++;
	}
}

