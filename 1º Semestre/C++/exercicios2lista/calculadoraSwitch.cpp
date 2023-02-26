#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float v1,v2;
	char resp;
	printf("Digite a operação para ser feita (+,-,/,*): \n");
	scanf("%c",&resp);
	printf("Digite o primeiro numero: \n");
	scanf("%f",&v1);
	printf("Digite o segundo numero: \n");
	scanf("%f",&v2);
	switch(resp){
		case '+':
		printf("\nResultado é: %.2f\n", v1+v2);
		break;
		case '-':
		printf("\nResultado é: %.2f\n", v1-v2);
		break;
		case '*':
		printf("\nResultado é: %.2f\n", v1*v2);
		break;
		case '/':
		printf("\nResultado é: %.2f\n", v1/v2);
		break;
	}
}


