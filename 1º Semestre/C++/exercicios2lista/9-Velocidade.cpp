/*9. Construa um programa em que leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela
e calcule a multa que uma pessoa vai receber, sabendo que são pagos:
a. 50 reais se o motorista estiver ultrapassado em até 10km/h a velocidade permitida;
b. 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
c. 200 reais, se estiver acima de 31km/h da velocidade permitida.*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
		printf(" -- EXERCÍCIO 9 --\n\n");
		
		int vp,vm,vu;
	
	printf(" velocidade máxima permitida Km/h ");
	scanf("%i", &vp);
	printf(" velocidade do Motorista Km/h ");
	scanf("%i", &vm);
	
	vu=vm-vp;
	if (vu<=10){	
		printf(" Multa de 50 reais, %iKmh/h acima do Permetido" , vm-vp);
	}
	 else if (vu>=11 && vu<=30){
		printf(" Multa de 100 reais, %iKmh/h acima do Permetido" , vm-vp);
	}
	 else
		printf(" Multa de 200 reais, %iKmh/h acima do Permetido" , vm-vp);
	}


