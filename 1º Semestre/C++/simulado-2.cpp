/*A concession�ria de ve�culos �CARANGO VELHO� est� vendendo os seus ve�culos com desconto. 
Fa�a um programa que leia o valor do carro e o ano e calcule e exiba o valor do desconto e o valor a ser pago pelo cliente.
 O desconto dever� ser calculado de acordo com o ano do ve�culo. At� 2000 -12%, at� 2006 -9% e acima -7%.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float vcarro, ano,desc,vfinal,a;
	printf("Valor do carro:\n");
	scanf("%f",&vcarro);
	printf("Ano do carro:\n");
	scanf("%f",&ano);
	if(ano<=2000){
		desc=vcarro*0.12;
	}else if(ano<=2006){
		desc=vcarro*0.09;
	}else if(ano>=2007){
		desc=vcarro*0.07;
	}
	printf("Desconto:%.2f\n", desc);
	vfinal=vcarro-desc;
	printf("O valor final do carro vai ser:%.2f\n", vfinal);
}


