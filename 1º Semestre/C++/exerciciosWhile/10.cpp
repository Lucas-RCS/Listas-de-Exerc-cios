/*Fa�a um programa que leia uma quantidade n�o
determinada de n�meros positivos. O n�mero que
encerrar� a leitura ser� zero;
Calcule a quantidade de n�meros pares e �mpares;
a m�dia de valores pares;*/
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
		printf("\nQuantide de �mpar: %i",qi);
		printf("\nM�dia pares: %.2f\n",(float)sp/qp);
}
