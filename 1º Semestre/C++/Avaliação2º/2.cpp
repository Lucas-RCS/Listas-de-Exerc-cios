/*2.(3,5)A empresa de ônibus “Arca de Noé”, 
conta com uma frota de 3 ônibus, denominados:
1-Santa Maria,
2-Pinta e
3 -Nina. 
Para aperfeiçoar o sistema de  controle  dos  passageiros,  
foi  realizado  um  levantamento  no  qual  cada usuário, dos 
50 entrevistados, respondia:
• o ônibus que utilizava com mais frequência (1, 2 ou 3);
• o período que utilizava o ônibus, entre:-“M” = matutino;-“V” = vespertino;-“N” = noturno.
Construa um programa que calcule e escreva:
-qual a porcentagem de utilização entre os ônibus;
-qual é o período de menor utilização.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	char pe;
	int c, onibus;
	float sm=0, p=0, ni=0, m=0, v=0, n=0;
	for(c=1; c<=5; c++){
		printf("Passageiro %i\n", c);
		printf("\nPeriodo ônibus: \nM - Matutino \nV - Vespertino \nN - Noturno: \n");
		scanf(" %c", &pe);
		printf("\nÔnibus com mais frequencia: \n1 - Santa Maria\n2 - Pinta\n3 - Nina: \n");
		scanf("%i", &onibus);
		if(pe=='m' || pe=='M'){
			m++;
		} else if(pe=='v' || pe=='V'){
			v++;
		} else if(pe=='n' || pe=='N'){
			n++;
		}
		switch(onibus){
			case 1:
				sm++;
				break;
			case 2:
				p++;
				break;
			case 3:
				ni++;
				break;
		}
	}
	c--;
	printf("Santa Maria: %.2f\n", sm/c*100);
	printf("Pinta: %.2f\n", p/c*100);
	printf("Nina: %.2f\n", ni/c*100);
	if (m<v && m<n){
		printf("Menor utilizacao: Matutino");
	} else if (v<m && v<n){
		printf("Menor utilizacao: Verpertino");
	} else if (n<m && n<v){
		printf("Menor utilizacao: Noturno");
	}
}

