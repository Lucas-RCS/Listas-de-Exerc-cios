#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int n,r10,r5,r2;
	printf("Entre com um numero:\n");
	scanf("%d",&n);
	r10=n%10;
	r5=n%5;
	r2=n%2;

	if(r10==0 && r5==0 && r2==0){
	printf("Divisivel por 10,5 e 2");
	}else if(r10!=0 && r5==0 && r2!=0){
		printf("por 5");
	}else if(r10!=0 && r5!=0 && r2==0){
		printf("por 2");
	}else{
	printf("nao e divisivel por nenhum destes");
	}
}


