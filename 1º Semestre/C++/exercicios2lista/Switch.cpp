#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	char resp;
	printf("Resposta (S/N): ");
	scanf("%c",&resp);
	switch(resp){
		case 'S':
		case 's':
		printf("Resposta SIM!\n");
		break;
		case 'N':
		case 'n':
		printf("Resposta NAO!\n");
		break;
		default:
		printf("Resposta Inválida\n");
		}
}


