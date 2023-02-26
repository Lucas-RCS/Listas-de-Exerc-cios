/*13. Construa um programa que apresente a série de Fibonacci
até o décimo quinto termo. A série de Fibonacci é formada
pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34,… etc. Esta série
caracteriza-se pela soma do último termo pelo seu anterior.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int a=1, b=1, c, qt=3;
	printf("%i, %i",a,b);
	while(qt<=15){
		c=a+b;
		printf(", %i",c);
		a=b;
		b=c;
		qt++;
	}
}

