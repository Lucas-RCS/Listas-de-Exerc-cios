/*A importadora de jogos eletrônicos “GameBoi” está comercializando um novo jogo no Brasil. Entretanto ela precisa calcular o 
valor do produto no país incluindo o imposto. Desenvolva um programa que leia o custo do jogo em dólar e calcule o novo valor em reais, 
adicionando ao cálculo o imposto de  importação  no  valor de  32% do  valor do  produto  em  Reais. 
 O  programa deverá exibir o valor em reais do produto, o valor do imposto e o valor final (valor em reais+imposto). 
 Sabe-se que a cotação de US$ 1.00 é: R$ 5.25.*/
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


