/*Ex.6 - Crie um programa que apresente os valores
de convers�o de Celsius para Fahrenheit, de 5 em 5
graus, de 0� Celsius a 100� Celsius. F=(C*1.8)+32 */
#include<stdio.h>
main(){
float c=0,f;
while(c<=100){
	f=(c*1.8)+32;
	printf("%.f�C equivale a %.f�F\n",c,f);
	c+=5; // c=c+5
	}
}
