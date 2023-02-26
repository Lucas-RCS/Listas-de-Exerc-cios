/*Chico tem 1,50 metro e cresce 2 centímetros por ano,
enquanto Zé tem 1,10 metro e cresce 3 centímetros por
ano. Construa um programa que calcule e escreva quantos
anos serão necessários para que Zé seja maior que Chico.*/
#include<stdio.h>
main(){
float chico=1.50, ze=1.10, qa=0;
do{
chico+=0.02;
ze+=0.03;
qa++;
}while(ze<=chico);
printf("Quantidade de anos Ze>Chico: %.f\n",qa);
}
