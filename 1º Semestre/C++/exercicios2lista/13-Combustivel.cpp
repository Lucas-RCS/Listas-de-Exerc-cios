/*13. Um posto est� vendendo combust�veis com a seguinte tabela de pre�os
apresentada abaixo. Desenvolva um programa que leia o n�mero de litros
vendidos e o tipo de combust�vel (codificado da seguinte forma: A - �lcool, G -
gasolina). Calcule e escreva o valor a ser pago pelo cliente.*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
	printf(" -- EXERC�CIO 13 --\n\n");
	
	char AG;
	float c, total;
	
	printf(" �lcool / Gasolina (A/G): ");
	scanf(" %c", &AG);
	printf(" Litros de combust�vel: ");
	scanf("%f", &c);
	
	switch(AG){
		case 'a':
		case 'A':
			if (c<15){
				total=c*2.00;
				printf(" %.0fL de �lcool = R$%.2f", c,total);
			}
			else if (c>15 && c<=30){
				total=c*1.95;
				printf(" %.0fL de �lcool = R$%.2f", c,total);
			}
			else {
				printf(" %.0fL de �lcool = R$%.2f", c, c*1.80);
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
					printf("Resposta Inv�lida\n");
	}		
}

