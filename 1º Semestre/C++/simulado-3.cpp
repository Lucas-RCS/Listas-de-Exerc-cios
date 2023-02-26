/*A empresa de suco “CaldoDeCana” resolveu realizar descontos em sua linha de produtos. 
O valor total da compra dependem do produto e da quantidade, conforme   o   esquema   na   tabela   abaixo.
 Desenvolvaum programaque leia o código do suco e a quantidade comprada.
 O programadeve calcular o custo final da contae escrever o valor a ser pago.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float und, qtd;
	char cod;
	printf("Código:\n");
	scanf(" %c",&cod);
	printf("Quantidade: \n");
	scanf("%f",&qtd);
	if(cod=='A' || cod=='a'){
		if(qtd<=5)
		und=3.00;
		else if(qtd<=15)
		und=2.60;
		else
		und=2.10;
	} else if(cod=='B' || cod=='b'){
		if(qtd<=5)
		und=4.00;
		else if(qtd<=15)
		und=3.50;
		else
		und=3.00;
	} else {
		if(qtd<=5)
		und=5.00;
		else if(qtd<=15)
		und=4.30;
		else
		und=3.70;
	}
	printf("\nValor Total a Pagar: R$ %.2f\n",qtd*und);
}

