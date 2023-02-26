#include <stdio.h>
#include <stdlib.h>
main(){
	float vc,vd,vpc,ano; //vc=valor do carro, vd=valor do desconto,vpc= valor a ser pago pelo cliente

	printf("Valor do carro: ");
	scanf("%f",&vc);
	
	printf("Ano do veiculo: ");
	scanf("%f",&ano);
	
	if(ano<=2000){
		printf("Desconto de 12%%: %f\n",vc*0.12);
		printf("Valor final: %f\n",vc-(vc*0.12));
	}	else if(ano<=2006){
		printf("Desconto de 9%%: %f\n",vc*0.09);
		printf("Valor final: %f\n",vc-(vc*0.09));
	}	else {
		printf("Desconto de 7%%: %f\n",vc*0.07);
		printf("Valor final: %f\n",vc-(vc*0.07));
	}
}
