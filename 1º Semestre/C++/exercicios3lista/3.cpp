/*3. Construa um programa que calcule a m�dia dos
n�meros digitados pelo usu�rio, se eles forem pares.
Termine a leitura se o usu�rio digitar zero (0).*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int n, qp=0, sp=0;
	do{
		printf("Valor: ");
		scanf("%i",&n);
		if(n%2==0 && n!=0){
		qp++;
		sp+=n;
		}
	}while(n!=0);
	printf("\nM�dia pares: %.2f\n",(float)sp/qp);
}
