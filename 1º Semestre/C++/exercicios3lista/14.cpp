/*14. Construa um programa que gere a sequencia de números
perfeitos entre 1 e 800. Um número perfeito é aquele que é
igual a soma dos seus divisores. (Ex.: 6 = 1+2+3;
28= 1+2+4+7+14 etc).*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int s=1, c, sd;
	while(s<=800){
		c=1;
		sd=0;
		while(c<s){
			if(s%c==0){
			sd+=c;
			}
			c++;
		}
		if(s==sd){
		printf("Numeros perfeito: %i\n",s);
		}
	s++;
	}
}

