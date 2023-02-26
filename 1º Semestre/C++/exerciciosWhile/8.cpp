/*Ex.8 - Faça um programa leia n números (ou seja,
leia vários números digitados pelo usuário enquanto
for diferente de “0”) e mostre a soma e a média deles.*/
#include<stdio.h>
main(){
float c=1, n=1, tot=0;
while(n!=0){
	printf("Nota %.f: ",c);
	scanf("%f",&n);
	if(n!=0){
		tot+=n;
		c++;
		}
	}
		printf("\nSoma das notas: %.2f\n",tot);
		printf("Média das notas: %.2f\n",tot/--c);
}
