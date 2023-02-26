/*7. Em uma eleição presidencial existem dois candidatos.
Os votos são informados através de códigos. Os dados
utilizados para a contagem dos votos têm-se a seguinte
codificação: 1,2= voto para os respectivos candidatos;
3= voto nulo; 4= voto em branco; Elabore um programa que
leia o código do candidato em um voto. Como finalizador
do conjunto de votos, tem-se o valor 0. Calcule e escreva:
(1) percentual de votos para cada candidato; (2) percentual de
votos nulos; (3) percentual de votos em branco;*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float voto, cand1=0, cand2=0, nulos=0, brancos=0, r;
	do{
		printf("Voto( 1-Candidato 1 | 2-Candidato 2 | 3-Nulo | 4-Branco ): ");
		scanf("%f",&voto);
		if(voto==1)
		cand1++;
		if(voto==2)
		cand2++;
		if(voto==3)
		nulos++;
		if(voto==4)
		brancos++;
	}while(voto!=0);
		r=cand1+cand2+nulos+brancos;
			printf("\nCandidado 1: %.2f %%",cand1/r*100);
			printf("\nCandidado 2: %.2f %%",cand2/r*100);
			printf("\nNulos: %.2f %%",nulos/r*100);
			printf("\nBrancos: %.2f %%\n",brancos/r*100);
	
}

