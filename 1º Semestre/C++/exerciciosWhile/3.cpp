/*Ex.3-Faça um programa que mostre todos os
números pares menores que 15.*/
#include<stdio.h>
main(){
int c=1;
while(c<=15){
	if(c%2==0){
	printf("%i\n",c);
	}
	c++;
	}
}
