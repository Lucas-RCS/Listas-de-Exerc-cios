#include <stdio.h>
#include <stdlib.h>
/*Exercicio 21 lista 2*/
main(){
	float HT, VH, Sl, inss, irpf, sb,ir;
	/*Ht=horas trabalhada,VH=valor da hora,Sl=salario bruto,Sb=salario bruto,ir=imposto de renda*/
	
	printf("Horas Trabalhadas: ");
	scanf("%f",&HT);
	
	printf("Valor da Hora trabalhada: ");
	scanf("%f",&VH);
	
	sb=HT*VH;
	printf("Salario Bruto: %.2f\n",sb);
	
	if(sb<=868.29){
		printf("INSS: %.2f\n",sb*0.0765);
		inss=sb*0.0765;
	}else if(sb>=868.30 && sb<=1447.14){
		printf("INSS: %.2f\n",sb*0.08);
		inss=sb*0.08;
	}else if(sb>=1447.15 && sb<=2894.28){
		printf("INSS: %.2f\n",sb*0.09);
		inss=sb*0.09;
	}else if(sb>2894.28){
		printf("INSS: %.2f\n",sb*0.11);
		inss=sb*0.11;
	}else{
		printf("Algo deu errado\n");
	}	
	
	if(sb<=1499.15){
		printf("Isento\n");
	}else if(sb>=1499.16 && sb<=3743.19){
		irpf=sb*0.15;
		ir=224.87;
		printf("15%% IRPF: %.2f\n",irpf);
	}else if(sb>3743.19){	
		irpf=sb*0.275;
		ir=561.02;
		printf("27.5%% IRPF: %.2f\n",irpf);
	}else {
		printf("Programador ruim\n");	
	}

	irpf=(sb-inss)*ir;	
	printf("Imposto: %.2f\n",irpf);	
	Sl=sb-(inss+ir);
	printf("Salraio Liquido: %.2f\n",Sl);
}
