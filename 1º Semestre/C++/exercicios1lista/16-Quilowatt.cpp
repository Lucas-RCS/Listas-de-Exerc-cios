/*16. Sabe-se que o quilowatt de energia custa 0,5% do
sal�rio m�nimo. Fa�a um algoritmo que receba o valor do
sal�rio m�nimo e a quantidade de quilowatts consumida
por uma resid�ncia. Calcule e mostre:
a. O valor, em Reais, de cada quilowatt.
b. O valor, em Reais, a ser pago por essa resid�ncia.
c. O valor, em Reais, a ser pago com desconto de 15%.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
float sm, qc, vq, vr;
printf("Sal�rio m�nimo: ");
scanf("%f",&sm);
printf("Qtde. quilowatt consumido: ");
scanf("%f",&qc);
vq=sm*0.5/100;
vr=vq*qc;
printf("\nValor quilowatt R$ %.2f",vq);
printf("\nValor resid�ncia R$ %.2f",vr);
printf("\nValor c/ desc. R$ %.2f\n",vr*0.85);
}
