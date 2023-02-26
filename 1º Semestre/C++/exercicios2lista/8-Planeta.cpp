/*8. Escreva um algoritmo que leia um peso na terra e o número de um planeta e exiba o valor do seu
peso neste planeta. Os planetas estão representados logo abaixo, juntamente com o valor das
gravidades relativa:
Importante: Peso no planeta = Peso na terra * Gravidade*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
		printf(" -- EXERCÍCIO 8 --\n\n");
		
		float P,CP,Pp;
	printf(" Qual seu Peso: KG "); 
	scanf("%f", &P);
	printf(" Escolha o Código do planeta de 1 a 5: "); 
	scanf("%f", &CP);
	
	if (CP==1) {
		Pp=P*0.37;
		printf("\n Seu Peso em Mercúrio será de %.2fKG", Pp);
	}
	 else if (CP==2) {
		Pp=P*0.88;
		printf(" Seu Peso em Vênus será de %.2fKG", Pp);
	}
	 else if (CP==3) {
		Pp=P*0.38;
		printf(" Seu Peso em Marte será de %.2fKG", Pp);
	}
	 else if (CP==4) {
		Pp=P*2.64;
		printf(" Seu Peso em Júpiter será de %.2fKG", Pp);
	}
	 else if (CP==5) {
		Pp=P*1.15;
		printf(" Seu Peso em Saturno será de %.2fKG", Pp);
	}
}

