/*Ex.8 - Fa�a um programa leia n n�meros (ou seja,
leia v�rios n�meros digitados pelo usu�rio enquanto
for diferente de �0�) e mostre a soma e a m�dia deles.*/
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
		printf("M�dia das notas: %.2f\n",tot/--c);
}
