/*10. Construa um programa que receba o peso de um produto de uma empresa de reciclagem, na qual a pe�a ao passar por um sensor � verificada
o peso e analisada o quanto da pe�a ser� reaproveitada, sabendo que a pe�a � um metal:
a. Se a pe�a pesar mais de 50 kg, aproveitar� 85% do peso da pe�a
b. Se a pe�a pesar menos ou igual 50 kg e maior que 20 Kg, aproveitar� 60% do peso da pe�a
c. Se a pe�a pesar menos ou igual 20 kg e maior que 10 Kg, aproveitar� 30% do peso da pe�a.
d. Caso a pe�a pesar menos ou igual a 10 Kg, a pe�a n�o ser� aproveitada.
Ao final mostrar: Qual o peso ser� aproveitado da pe�a.
*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
	printf(" -- EXERC�CIO 10 --\n\n");
	
	float pp,aprov;

	printf(" Peso de um produto em Kg ");
	scanf("%f",&pp);
	
	if (pp>50){
	aprov= pp*0.85;
	printf(" Ser� Aproveitado 85%% = %.2fKg da Pe�a",aprov);
}	
	else	if (pp<=50 && pp>20){
	aprov= pp*0.60;
	printf(" Ser� Aproveitado 60%% = %.2fKg da Pe�a",aprov);
}
	else	if (pp<=20 && pp>10){
	aprov= pp*0.30;
	printf(" Ser� Aproveitado 30%% = %.2fKg da Pe�a",aprov);
}
	else {	
	printf(" N�o ser� Aproveitado");
}
}

