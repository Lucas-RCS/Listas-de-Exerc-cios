/*15. Construa um algoritmo que leia o valor e o tipo de um
produto. Calcule o imposto de um produto de acordo com o
valor e o tipo de produto, conforme tabela abaixo.
*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
	printf(" -- EXERCÍCIO 15 --\n\n");
	
	char LAV;
	float vp, total;
	
	printf(" Limpeza / Alimentação / Vestuário (L/A/V): ");
	scanf(" %c", &LAV);
	printf(" Valor do Produto: R$ ");
	scanf("%f", &vp);
	
	switch(LAV){
		case 'l':
		case 'L':
			if (vp<=100){
				total=vp*0.05;
				printf(" Imposto 5%% = R$%.2f", total);
			}
			else if (vp>100 && vp<=500){
				total=vp*0.04;
				printf(" Imposto 4%% = R$%.2f", total);
			}
			else {
				printf(" Imposto 2%% = R$%.2f", vp*0.02);
			}
		break;			
			case 'a':
			case 'A':
			if (vp<=100){
				total=vp*0.03;
				printf(" Imposto 3%% = R$%.2f", total);
			}
			else if (vp>100 && vp<=500){
				total=vp*0.02;
				printf(" Imposto 2%% = R$%.2f", total);
			}
			else {
				printf(" Imposto 1%% = R$%.2f", vp*0.01);
			}
		break;
		case 'v':
		case 'V':
			if (vp<=100){
				total=vp*0.07;
				printf(" Imposto 7%% = R$%.2f", total);
			}
			else if (vp>100 && vp<=500){
				total=vp*0.06;
				printf(" Imposto 6%% = R$%.2f", total);
			}
			else {
				printf(" Imposto 4%% = R$%.2f", vp*0.04);
			}
			break;
				default:
					printf(" Resposta Inválida\n");
	}	
}

