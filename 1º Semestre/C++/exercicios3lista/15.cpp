/*15. Faça um programa que escreva os números primos
entre 92 e 1478*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int s=92, c, quant;
	while(s<=147800){
	c=2;
	quant=0;
	while(c<=s/2){
		if(s%c==0){
		quant++;
		break;
		}
		c++;
	}
		if(quant==0){
		printf("Primo: %i\n",s);
		}
		s++;
	}
}

