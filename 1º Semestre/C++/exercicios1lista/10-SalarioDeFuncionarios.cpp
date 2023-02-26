/*Uma revendedora de carros usados paga a seus funcionários vendedores, um salário fixo
por mês e mais 5% do valor das vendas por ele efetuadas. Construa um algoritmo que leia
o número do vendedor, o total de vendas no mês e o salário fixo. Calcule o salário a ser
pago a este vendedor, escrevendo o número do vendedor e seu salário total.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float s,sf;
	int n,vm;
	printf("- Digite o numero do Vendedor:\n");
	scanf("%d",&n);
	printf("- Quantas vendas no mês foram feita pelo Vendedor:\n");
	scanf("%d",&vm);
	printf("- Qual é o sálario desse Vendedor:\n");
	scanf("%f",&s);
	sf=s+(vm*0.05);
	printf("O funcionario %.f ",n);
	printf("que possue o salário fixo de: R$%.2f\n", s);
	printf("Irá este mês receber o salário de: R$%.2f",sf);
}


