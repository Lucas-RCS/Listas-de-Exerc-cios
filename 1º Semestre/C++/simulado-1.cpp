/*A importadora de jogos eletr�nicos �GameBoi� est� comercializando um novo jogo no Brasil. Entretanto ela precisa calcular o 
valor do produto no pa�s incluindo o imposto. Desenvolva um programa que leia o custo do jogo em d�lar e calcule o novo valor em reais, 
adicionando ao c�lculo o imposto de  importa��o  no  valor de  32% do  valor do  produto  em  Reais. 
 O  programa dever� exibir o valor em reais do produto, o valor do imposto e o valor final (valor em reais+imposto). 
 Sabe-se que a cota��o de US$ 1.00 �: R$ 5.25.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float cj,vreal,impo,vfinal;
	printf("Custo do jogo em dolar:\n");
	scanf(" %f",&cj);
	vreal=cj*5.25;
	impo=vreal*0.32;
	vfinal=vreal+impo;
	printf("\nValor em R$: R$ %.2f\n",vreal);
	printf("\nValor do Imposto: R$ %.2f\n",impo);
	printf("\nValor Final: R$ %.2f\n",vfinal);
}


