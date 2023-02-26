/*9. Construa um programa que possibilite calcular a área
total de uma residência (sala, cozinha, banheiro, quartos,
área de serviço, garagem, etc.). O algoritmo deve solicitar a
entrada do nome, a largura e o comprimento de um determinado
cômodo. Em seguida, deve apresentar a área do cômodo lido e
também uma mensagem solicitando do usuário a confirmação de
continuar. Caso o usuário responda não, o algoritmo deve
apresentar o valor total acumulado da área residencial.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	char comodo[20], resp;
	float larg, comp, area, total=0;
	do{
		printf("\nNome Comodo: ");
		scanf(" %s",&comodo);
		
		printf("Largura: ");
		scanf("%f",&larg);
		
		printf("Comprimento: ");
		scanf("%f",&comp);
		
		area=larg*comp;
		total+=area;
		
		printf("\nÁrea do(a) %s: %.2f mts\n", comodo, area);
		printf("\nDeseja continuar digitando ? (s/n): ");
		scanf(" %c",&resp);
	}while(resp=='s');
	printf("\n\n=== Total Area Residencial: %.2f mts\n",total);
}
