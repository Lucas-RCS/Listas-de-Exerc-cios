/*8. Escreva um programa que leia 500 valores inteiros e
positivos e: a) encontre o maior valor; b) encontre o menor
valor; c) calcule a média dos números lidos.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int c=1, n, ma, me, tot=0;
	while(c<=5){
		printf("Valor %i: ",c);
		scanf("%i",&n);
		tot+=n;
		if(c==1){
		ma=n;
		me=n;
	}
	if(n>ma)
		ma=n;
		if(n<me)
		me=n;
		c++;
	}
	printf("\nMaior Valor: %i",ma);
	printf("\nMenor Valor: %i",me);
	printf("\nMédia: %.2f\n",(float)tot/--c);
}

