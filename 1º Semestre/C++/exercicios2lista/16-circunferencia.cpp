/*16. Fa�a um programa que leia dois valores, o primeiro servindo
de indicador de opera��o e o segundo correspondendo ao raio de uma
circunfer�ncia. Caso o primeiro valor lido seja igual a 1, calcular
e escrever a �rea desta circunfer�ncia. Se o valor lido for 2,
calcular e escrever o per�metro da circunfer�ncia. E se o valor
lido for diferente destes dois valores, escreva uma mensagem
dizendo que o indicador de opera��o foi mal fornecido.
�rea circunfer�ncia: raio2 * PI (3.14159);
Per�metro circunfer�ncia: 2 * PI (3.14159) * raio.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int op;
float raio;
printf("Op��o (1 ou 2): ");
scanf("%i",&op);
printf("Raio: ");
scanf("%f",&raio);
switch(op){
case 1:
printf("�rea: %.2f\n",raio*raio*3.14159);
break;
case 2:
printf("Per�metro: %.2f\n",2*3.14159*raio);
break;
default:
printf("\nOperador inv�lido\n");
}
}

