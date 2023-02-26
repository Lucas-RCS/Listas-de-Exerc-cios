/*3. Construa um programa que calcule a média dos
números digitados pelo usuário, se eles forem pares.
Termine a leitura se o usuário digitar zero (0).*/
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
	printf("\nMédia pares: %.2f\n",(float)sp/qp);
}
