/*8. Escreva um algoritmo que leia um peso na terra e o n�mero de um planeta e exiba o valor do seu
peso neste planeta. Os planetas est�o representados logo abaixo, juntamente com o valor das
gravidades relativa:
Importante: Peso no planeta = Peso na terra * Gravidade*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
		printf(" -- EXERC�CIO 8 --\n\n");
		
		float P,CP,Pp;
	printf(" Qual seu Peso: KG "); 
	scanf("%f", &P);
	printf(" Escolha o C�digo do planeta de 1 a 5: "); 
	scanf("%f", &CP);
	
	if (CP==1) {
		Pp=P*0.37;
		printf("\n Seu Peso em Merc�rio ser� de %.2fKG", Pp);
	}
	 else if (CP==2) {
		Pp=P*0.88;
		printf(" Seu Peso em V�nus ser� de %.2fKG", Pp);
	}
	 else if (CP==3) {
		Pp=P*0.38;
		printf(" Seu Peso em Marte ser� de %.2fKG", Pp);
	}
	 else if (CP==4) {
		Pp=P*2.64;
		printf(" Seu Peso em J�piter ser� de %.2fKG", Pp);
	}
	 else if (CP==5) {
		Pp=P*1.15;
		printf(" Seu Peso em Saturno ser� de %.2fKG", Pp);
	}
}

