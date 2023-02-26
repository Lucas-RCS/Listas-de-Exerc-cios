/*Zé do Peixe, pescador e homem de bem, comprou um computador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz
um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00
por quilo excedente. Zé precisa que você faça um programa que leia o peso de peixes e verifique se há excesso. Se houver, calcular o excesso e
o valor da multa que ele deverá pagar. Caso contrário escrever: “Peso dentro do regulamentado”.
*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
	printf(" -- EXERCÍCIO 6 --\n\n");
	float pp, multa;
	
	printf(" Peso dos Peixes: Kg ");
	scanf("%f", &pp);
	
	if (pp<=50){
		printf(" Peso dentro do regulamentado.");
	} else if (pp>50){
		multa= (pp-50)*4.0;
		printf(" Multa de R$ %.2f para %.0fKG excedido. ", multa, pp-50);
	}
	
	
}

