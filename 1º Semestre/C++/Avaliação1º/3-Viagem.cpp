/*Desenvolva um programa que leia o código de destino de viagem, se a
 viagem inclui retorno (I-ida e V-volta) e a quantidade de passageiros que  irão  viajar.  Calcule  o  
preço  total  (quantidade  de  passageiros  *  Valor passagem). Escreva 
o preço total da viagem conforme a tabela seguir.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	char v;
	float cv, qt, valor;
	printf("Tipo da viagem (I -> Ida/ V - Ida e Volta) :");
	scanf(" %c", &v);
	printf("\n Código destinho:");
	scanf("%f", &cv);
	printf("\n Qtde de Passageiros: ", &qt);
	scanf("%f", &qt);
	if(v=='I'||v=='i'){
		if(cv==1){
			valor= 500*qt; 
		} else if(cv==2){
			valor= 350*qt;
		}  else if(cv==3){
			valor= 350*qt;
		}  else if(cv==4){
			valor= 300*qt;
		} else{
			printf("Codigo de destinho inválido.");
		}
	} else if (v=='V'||v=='v'){
		if(cv==1){
			valor= 900*qt; 
		} else if(cv==2){
			valor= 650*qt;
		}  else if(cv==3){
			valor= 600*qt;
		}  else if(cv==4){
			valor= 550*qt;
		} else{
			printf("Codigo de destinho inválido.");
		}
	} else {
		printf("Tipo de viagem inválida.");
	}
	printf("Valor total: R$ %.2f\n", valor);
}


