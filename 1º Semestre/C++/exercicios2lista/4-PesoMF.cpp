/*4. O peso ideal para uma pessoa é calculado pelas seguintes fórmulas:
Sexo Masculino: (72.7*altura)-58
Sexo Feminino: (62.1*altura)-44.7
Escreva um programa que receba como entrada: sexo (f ou m), altura e
peso; calcule o peso ideal usando a fórmula que for pertinente.
Como resultado o programa deve exibir na tela: a diferença entre os
pesos (peso e peso ideal) e um alerta:
“*** Peso normal ou abaixo do ideal ***” ou
“*** Peso acima do Ideal ***”.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	char sexo;
	float alt, peso, pideal;
	printf("Sexo (f ou m): ");
	scanf(" %c",&sexo);
	printf("Altura: ");
	scanf("%f",&alt);
	printf("Peso: ");
	scanf("%f",&peso);
	if(sexo=='m' || sexo=='M'){
		pideal=(72.7*alt)-58;
	} else {
		pideal=(62.1*alt)-44.7;
	}
	printf("\nPeso Ideal: %.2f\n",pideal);
	if(peso>pideal){
		printf("Peso acima do ideal: %.2f\n",peso-pideal);
	} else {
	printf("Peso normal ou abaixo do ideal: %.2f\n",peso-pideal);
	}
}
