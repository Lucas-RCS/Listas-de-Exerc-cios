/*1. Faça um programa que leia dois valores inteiros A e B
se os valores forem iguais deverá se somar os dois, caso contrário multiplique A por B ao
final do calculo escrever o resultado.
*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf(" -- EXERCÍCIO 1 --\n\n");
	printf(" Digite o primeiro Valor: ");
	scanf("%i", &a);
	printf(" Digite o Segundo Valor: ");
	scanf("%i", &b);
	
	if(a==b) {
		printf(" Resultado soma = %i\n", a+b);
}	else{
		printf(" Resultado multiplicação = %i\n", a*b);
}

}
