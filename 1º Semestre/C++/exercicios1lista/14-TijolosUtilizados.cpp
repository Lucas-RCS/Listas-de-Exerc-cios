/*Construa um algoritmo que leia altura e comprimento de uma parede e calcule a quantidade de tijolos a 
ser utilizado na construção dessa parede. Sabe-se que o tijolo tem 30cm de comprimento e 20cm de altura 
e a argamassa ocupa 2,5 cm*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float a,c,compr,altura,r;
	printf(" Ensira a altura da parede em metros:\n");
	scanf("%f",&a);
	printf(" Ensira o comprimento da parede em metros:\n");
	scanf("%f",&c);
	altura=a/(20+2.5);
	compr=c/(30+2.5); 
	r=altura*compr;
	printf(" Serao utilizados %f",r);
	printf(" tijolos.");
}


