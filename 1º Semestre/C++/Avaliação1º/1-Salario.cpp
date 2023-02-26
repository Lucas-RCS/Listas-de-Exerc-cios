/*A empresa XYZ está precisando calcular o salário de seus funcionários vendedores,   adicionando   o   
valor   da   comissão pelas   vendas   por   eles realizadas  ao  seu  salário  fixo  e  descontando  11%  
de  INSSdo  salário  bruto(Fixo  +  Comissão).  Faça  um  programa  que  leia  o  salário  fixo  e  o  total 
 de vendas efetuadas pelo vendedor no mês, sabendo que este vendedor ganha 15% de comissão sobre suas vendas,
informar o valor da comissão, o saláriobruto, o valor do INSS e ototal que esse vendedor vai receberno 
final do mês(Fixo + Comissão –INSS).*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float s, tv, co, sb, inss, sf;
	printf(" Salário Fixo R$:\n");
	scanf("%f", &s);
	printf(" Total Vendas R$:\n", tv);
	scanf("%f", &tv);
	co=tv*0.15;
	printf("\nComissão: %.2f", co);
	sb=s+co;
	printf("\nSalario Bruto: %.2f", sb);
	inss=0.11*sb;
	printf("\nINSS: %.2f", inss);
	sf=s+co-inss;
	printf("\nSalário: %.2f", sf);
}


