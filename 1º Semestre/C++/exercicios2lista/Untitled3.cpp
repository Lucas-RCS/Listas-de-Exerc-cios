/*A empresa XYZ est� precisando calcular o sal�rio de seus funcion�rios vendedores,   adicionando   o   
valor   da   comiss�o pelas   vendas   por   eles realizadas  ao  seu  sal�rio  fixo  e  descontando  11%  
de  INSSdo  sal�rio  bruto(Fixo  +  Comiss�o).  Fa�a  um  programa  que  leia  o  sal�rio  fixo  e  o  total 
 de vendas efetuadas pelo vendedor no m�s, sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas,
informar o valor da comiss�o, o sal�riobruto, o valor do INSS e ototal que esse vendedor vai receberno 
final do m�s(Fixo + Comiss�o �INSS).*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float sf, tv, co, sb, inss, sf;
	printf(" Sal�rio Fixo R$:\n");
	scanf("%f", &sf);
	printf(" Total Vendas R$:\n", tv);
	scanf("%f", &tv);
	co=tv*0.15;
	printf("\nComiss�o: %2.f", co);
	sb=sf+co;
	printf("\nSalario Bruto: %2.f", sb);
	inss=0.11*sb;
	printf("\nINSS: %2.f", inss);
	sf=sf+co-inss;
	printf("\nSal�rio: %2.f", sf);
}


