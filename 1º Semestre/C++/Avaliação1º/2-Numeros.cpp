/*Fa�a um programa que leia dois n�meros e escreva a mensagem 
�N�meros iguais�, se os n�meros forem iguais, caso contr�rio, 
escreva �N�meros diferentes� e o menor e o maior na sequ�ncia.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float na, nb;
	printf("Valor do 1�Numero: \n");
	scanf("%f", &na);
	printf("Valor do 2�Numero: \n");
	scanf("%f", &nb);
	if (na==nb){
		printf("Numero iguais");
	} else{
		printf("Numeros diferentes\n");
		if(na>nb){
			printf("Ordem Crescente: %.f %.f\n", na, nb);
		}else{
			printf("Ordem Crescente: %.f %.f\n", nb, na);
		}
	}
}


