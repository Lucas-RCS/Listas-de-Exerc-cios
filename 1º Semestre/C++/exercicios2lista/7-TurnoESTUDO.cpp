/*7. Faça um Programa que pergunte em que turno você estuda.
Peça para digitar M - Matutino ou V - Vespertino ou N - Noturno. Escreva a
mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.*/

#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
		printf(" -- EXERCÍCIO 7 --\n\n");
	char Resp;
	
	printf(" Em que turno você estuda? ");
	scanf(" %c",&Resp);
	
		switch(Resp){
		case 'm':
		case 'M':
			printf(" Bom Dia!");
			break;
		case 'v':
		case 'V':	
			printf(" Boa Tarde!");
			break;
			case 'n':
			case 'N':	
			printf(" Boa Noite!");
			break;
		default:
			printf(" Resposta Inválida\n");
	}
	
	
}
