#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
	printf(" -- EXERC�CIO 18 --\n\n");

	char it;
	int t,F,C;
	
	printf(" Celsius / Fahrenheit (C/F): ");
	scanf(" %c",&it);
	printf(" Qual a Temperatura: ");
	scanf("%i", &t);
	
	switch(it){
		case'c':
		case'C':
		F=(9.0/5)*t+32;
		printf(" Temperatura em Fahrenheit = %i�F", F);
		break;
		case'f':
		case'F':
		C=(t-32.0)/1.8;
		printf(" Temperatura em Celsius = %i�C", C);
		break;
			default:
			printf("Resposta Inv�lida\n");
	}
		
}

