/*16. Faça um programa que leia dois valores, o primeiro servindo
de indicador de operação e o segundo correspondendo ao raio de uma
circunferência. Caso o primeiro valor lido seja igual a 1, calcular
e escrever a área desta circunferência. Se o valor lido for 2,
calcular e escrever o perímetro da circunferência. E se o valor
lido for diferente destes dois valores, escreva uma mensagem
dizendo que o indicador de operação foi mal fornecido.
Área circunferência: raio2 * PI (3.14159);
Perímetro circunferência: 2 * PI (3.14159) * raio.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int op;
float raio;
printf("Opção (1 ou 2): ");
scanf("%i",&op);
printf("Raio: ");
scanf("%f",&raio);
switch(op){
case 1:
printf("Área: %.2f\n",raio*raio*3.14159);
break;
case 2:
printf("Perímetro: %.2f\n",2*3.14159*raio);
break;
default:
printf("\nOperador inválido\n");
}
}

