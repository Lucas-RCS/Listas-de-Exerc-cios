#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float i;
	printf("Insira sua idade: \n", i);
	scanf ("%f",&i);
	if(i<16){
		printf("Nao eleitor.");
	} else if((i<16)||(i>65)){
		printf("Eleitor facultativo.");
	} else if((i>=18)&&(i<=65)){
		printf("Eleitor obrigatório.");
	}
}


