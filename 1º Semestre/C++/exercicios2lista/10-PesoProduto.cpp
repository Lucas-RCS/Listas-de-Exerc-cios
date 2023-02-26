/*10. Construa um programa que receba o peso de um produto de uma empresa de reciclagem, na qual a peça ao passar por um sensor é verificada
o peso e analisada o quanto da peça será reaproveitada, sabendo que a peça é um metal:
a. Se a peça pesar mais de 50 kg, aproveitará 85% do peso da peça
b. Se a peça pesar menos ou igual 50 kg e maior que 20 Kg, aproveitará 60% do peso da peça
c. Se a peça pesar menos ou igual 20 kg e maior que 10 Kg, aproveitará 30% do peso da peça.
d. Caso a peça pesar menos ou igual a 10 Kg, a peça não será aproveitada.
Ao final mostrar: Qual o peso será aproveitado da peça.
*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
	printf(" -- EXERCÍCIO 10 --\n\n");
	
	float pp,aprov;

	printf(" Peso de um produto em Kg ");
	scanf("%f",&pp);
	
	if (pp>50){
	aprov= pp*0.85;
	printf(" Será Aproveitado 85%% = %.2fKg da Peça",aprov);
}	
	else	if (pp<=50 && pp>20){
	aprov= pp*0.60;
	printf(" Será Aproveitado 60%% = %.2fKg da Peça",aprov);
}
	else	if (pp<=20 && pp>10){
	aprov= pp*0.30;
	printf(" Será Aproveitado 30%% = %.2fKg da Peça",aprov);
}
	else {	
	printf(" Não será Aproveitado");
}
}

