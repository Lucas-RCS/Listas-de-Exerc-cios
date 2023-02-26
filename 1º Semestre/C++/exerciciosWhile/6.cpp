/*Ex.6 - Crie um programa que apresente os valores
de conversão de Celsius para Fahrenheit, de 5 em 5
graus, de 0º Celsius a 100º Celsius. F=(C*1.8)+32 */
#include<stdio.h>
main(){
float c=0,f;
while(c<=100){
	f=(c*1.8)+32;
	printf("%.fºC equivale a %.fºF\n",c,f);
	c+=5; // c=c+5
	}
}
