/*Ex.7 - Faça um programa que leia 5 notas e
mostre a soma e a média deles.*/
#include<stdio.h>
main(){
float c=1, n, tot=0;
while(c<=5){
	printf("Nota %.f: ",c);
	scanf("%f",&n);
	tot+=n;
	c++;
	}
	printf("\nSoma das notas: %.2f\n",tot);
	printf("Média das notas: %.2f\n",tot/--c);
}
