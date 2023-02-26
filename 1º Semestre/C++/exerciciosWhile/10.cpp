/*Faça um programa que leia uma quantidade não
determinada de números positivos. O número que
encerrará a leitura será zero;
Calcule a quantidade de números pares e ímpares;
a média de valores pares;*/
#include<stdio.h>
main(){
	int n, qp=0, qi=0, sp=0;
	do{
		printf("Valor: ");
		scanf("%i",&n);
	if(n%2==0 && n!=0){
		qp++;
		sp+=n;
	}
		if(n%2!=0){
		qi++;
	}
		}while(n!=0);
		printf("\nQuantide de par: %i",qp);
		printf("\nQuantide de ímpar: %i",qi);
		printf("\nMédia pares: %.2f\n",(float)sp/qp);
}
