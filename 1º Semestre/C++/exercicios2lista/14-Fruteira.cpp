/*14. Uma fruteira está vendendo frutas com a seguinte tabela de preços apresentada
abaixo. Escreva um programa para ler a fruta (Abacaxi - A ou Goiaba - G) e a
quantidade (em Kg) adquirida. Escreva o valor a ser pago pelo cliente. Admitindo que o
cliente possa comprar apenas uma fruta. Se o cliente comprar mais de 8 Kg em frutas,
receberá ainda um desconto de 10% sobre este total.*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
	printf(" -- EXERCÍCIO 14 --\n\n");
	
	char AG;
	float q,total;
	
	printf(" Abacaxi / Goiaba (A/G): ");
	scanf(" %c", &AG);
	printf(" Quantidade: Kg ");
	scanf("%f", &q);
	
	switch(AG){
		case 'a':
		case 'A':
			if (q<=2){ 
				total=q*1.90;
				printf(" Total a Pagar: R$%.2f ",total);
			}
			else if (q>2 && q<=5){
				total=q*1.80;
				printf(" Total a Pagar: R$%.2f ",total);
			}
			else if (q>5 && q<=8){
				total=q*1.60;
				printf(" Total a Pagar: R$%.2f ", total);
			}
				else { 
				total=q*1.60;
				printf(" Total a Pagar com 10%% de desconto: R$%.2f ", total-(total*0.10));
			}
		break;			
			case 'g':
			case 'G':
			if (q<2){ 
				total=q*2.50;
				printf(" Total a Pagar: R$%.2f ",total);
			}
			else if (q>2 && q<=5){
				total=q*2.40;
				printf(" Total a Pagar: R$%.2f ",total);
			}
			else if (q>5 && q<=8){
				total=q*2.20;
				printf(" Total a Pagar: R$%.2f ", total);
			}
				else { 
				total=q*2.20;
				printf(" Total a Pagar com 10%% de desconto: R$%.2f ", total-(total*0.10));
			}
			break;			
				default:
					printf("Resposta Inválida\n");
}
}		


