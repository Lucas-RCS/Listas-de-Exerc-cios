/*13. Construa um programa que apresente a s�rie de Fibonacci
at� o d�cimo quinto termo. A s�rie de Fibonacci � formada
pela sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34,� etc. Esta s�rie
caracteriza-se pela soma do �ltimo termo pelo seu anterior.*/
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

