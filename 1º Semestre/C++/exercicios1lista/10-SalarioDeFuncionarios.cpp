/*Uma revendedora de carros usados paga a seus funcion�rios vendedores, um sal�rio fixo
por m�s e mais 5% do valor das vendas por ele efetuadas. Construa um algoritmo que leia
o n�mero do vendedor, o total de vendas no m�s e o sal�rio fixo. Calcule o sal�rio a ser
pago a este vendedor, escrevendo o n�mero do vendedor e seu sal�rio total.*/
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
	printf("- Quantas vendas no m�s foram feita pelo Vendedor:\n");
	scanf("%d",&vm);
	printf("- Qual � o s�lario desse Vendedor:\n");
	scanf("%f",&s);
	sf=s+(vm*0.05);
	printf("O funcionario %.f ",n);
	printf("que possue o sal�rio fixo de: R$%.2f\n", s);
	printf("Ir� este m�s receber o sal�rio de: R$%.2f",sf);
}


