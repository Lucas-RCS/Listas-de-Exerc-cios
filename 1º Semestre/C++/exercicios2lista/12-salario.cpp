/*12. A empresa XYZ decidiu conceder um aumento de salários
a seus funcionários de acordo com a tabela abaixo.
Escrever um algoritmo em pseudocódigo que lê a área de
um funcionário (P-Produção ou A-Administrativa) e o seu
salário atual. Escreva o percentual de seu aumento, o
valor do aumento e o valor do salário corrigido.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	char area;
	float satual, pa, va, sfinal;
	printf("Área (P ou A): ");
	scanf(" %c",&area);
	printf("Salário atual: ");
	scanf("%f",&satual);
	if(area=='P' || area=='p'){
		if(satual<=700)
		pa=0.15; // 15/100 = 0.15
			else if(satual<=1800)
			pa=0.10;
				else if(satual<=2500)
				pa=0.07;
	else
	pa=0;
	} else {
		if(satual<=700)
		pa=0.18; // 18/100 = 0.15
			else if(satual<=1800)
			pa=0.12;
				else if(satual<=2500)
				pa=0.08;
	else
	pa=0.05;
	}
	printf("\nPercentual: %.2f%%\n", pa*100);
	va=satual*pa;
	printf("Valor aumento R$ %.2f\n",va);
	sfinal=satual+va;
	printf("Salário Final R$ %.2f\n",sfinal);
}

