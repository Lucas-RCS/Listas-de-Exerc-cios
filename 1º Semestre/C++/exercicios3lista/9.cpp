/*9. Construa um programa que possibilite calcular a �rea
total de uma resid�ncia (sala, cozinha, banheiro, quartos,
�rea de servi�o, garagem, etc.). O algoritmo deve solicitar a
entrada do nome, a largura e o comprimento de um determinado
c�modo. Em seguida, deve apresentar a �rea do c�modo lido e
tamb�m uma mensagem solicitando do usu�rio a confirma��o de
continuar. Caso o usu�rio responda n�o, o algoritmo deve
apresentar o valor total acumulado da �rea residencial.*/
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
		
		printf("\n�rea do(a) %s: %.2f mts\n", comodo, area);
		printf("\nDeseja continuar digitando ? (s/n): ");
		scanf(" %c",&resp);
	}while(resp=='s');
	printf("\n\n=== Total Area Residencial: %.2f mts\n",total);
}
