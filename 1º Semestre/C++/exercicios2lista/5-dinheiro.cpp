#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float pe;
	int cp;
	
	printf("Preco da etiqueta: ");
	scanf("%f",&pe);
	
	printf("Codigo de pagamento: ");
	scanf("%i",&cp);
	
	switch (cp){
		case 1: 
			printf("A vista em dinheiro ou cheque, com 10%% de desconto: %f\n",pe-(pe*0.1));
			break;
		case 2:
			printf("A vista com cartao de credito, com 5%% de desconto: %f\n",pe-(pe*0.05));
			break;
		case 3:
			printf("em 2 vezes, preco normal de etiqueta sem juros: %f\n",pe/2);
			break;
		case 4:
			printf("Em 3 vezes, preco de etiqueta com acrecimo de 10%%: %f\n",pe/3+pe*0.1);	
			break;		
		}
}



