/*Faça um programa que leia dois números e escreva a mensagem 
“Números iguais”, se os números forem iguais, caso contrário, 
escreva “Números diferentes” e o menor e o maior na sequência.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float na, nb;
	printf("Valor do 1ºNumero: \n");
	scanf("%f", &na);
	printf("Valor do 2ºNumero: \n");
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


