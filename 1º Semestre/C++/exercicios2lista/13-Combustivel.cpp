/*13. Um posto está vendendo combustíveis com a seguinte tabela de preços
apresentada abaixo. Desenvolva um programa que leia o número de litros
vendidos e o tipo de combustível (codificado da seguinte forma: A - álcool, G -
gasolina). Calcule e escreva o valor a ser pago pelo cliente.*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
	printf(" -- EXERCÍCIO 13 --\n\n");
	
	char AG;
	float c, total;
	
	printf(" Álcool / Gasolina (A/G): ");
	scanf(" %c", &AG);
	printf(" Litros de combustível: ");
	scanf("%f", &c);
	
	switch(AG){
		case 'a':
		case 'A':
			if (c<15){
				total=c*2.00;
				printf(" %.0fL de Álcool = R$%.2f", c,total);
			}
			else if (c>15 && c<=30){
				total=c*1.95;
				printf(" %.0fL de Álcool = R$%.2f", c,total);
			}
			else {
				printf(" %.0fL de Álcool = R$%.2f", c, c*1.80);
			}
		break;			
			case 'g':
			case 'G':
			if (c<15){
				total=c*2.90;
				printf(" %.0fL de Gasolina = R$%.2f", c,total);
			}
			else if (c>15 && c<=30){
				total=c*2.85;
				printf(" %.0fL de Gasolina = R$%.2f", c,total);
			}
			else {
				printf(" %.0fL de Gasolina = R$%.2f", c, c*2.75);
			}
		break;
				default:
					printf("Resposta Inválida\n");
	}		
}

