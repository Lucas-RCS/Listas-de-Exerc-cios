/*11. Um endocrinologista deseja controlar a saúde de seus pacientes e, para isso, ele utiliza o
índice de massa corporal (IMC). Sabe-se que o IMC e calculado através da seguinte formula:
IMC= peso/altura2 onde: peso e dado em Kg e altura e dada em metros. Criar um programa
que apresente sua faixa de risco, baseando-se na seguinte tabela:
*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
		printf(" -- EXERCÍCIO 11 --\n\n");
		
	float P, A, IMC;
		
printf(" Qual Seu Peso: ");
scanf("%f",&P);
printf(" Qual sua Altura: ");
scanf("%f",&A);
	IMC =P/(A*A);	
	
	if (IMC<20) {	
		printf("\n Abaixo do peso ideal");
	}
	else if (IMC>=20 && IMC<=25){
		printf("\n Peso normal");
	}
	else if (IMC>25 && IMC<=30){
		printf("\n Excesso de peso");
	}
	else if (IMC>30 && IMC<=35){
		printf("\n Obesidade");
	}
	else
		printf("\n Obesidade Mórbida");
	}
