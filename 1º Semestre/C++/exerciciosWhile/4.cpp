/*Ex.4-Apresentar a soma dos cem primeiros
números inteiros positivos.*/
#include<stdio.h>
main(){
int c=1, tot=0;
while(c<=100){
	printf("%i\n",c);
	tot+=c; // tot=tot+c
	c++;
	}
	printf("\nTotal de 1 a 100: %i\n",tot);
}
