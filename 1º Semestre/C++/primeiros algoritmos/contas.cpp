#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	char op;
	float v1,v2,r;
	printf("Digite a opera��o para ser feita (+,-,/,*): \n");
	scanf("%c",&op);
	printf("Digite o primeiro numero: \n");
	scanf("%f",&v1);
	printf("Digite o segundo numero: \n");
	scanf("%f",&v2);
	if(op == '+'){
		r = v1+v2;
		printf("O resultado �: %.f", r);
	} else if (op=='-'){
		r=v1-v2;
		printf("O resultado �: %.f", r);
	} else if (op=='/'){
		r=v1/v2;
		printf("O resultado �: %.f", r);
	} else if(op=='*'){
		r=v1*v2;
		printf("O resultado �: %.f", r);
	} else
		printf("\n Operador invalido");

}


