#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
		printf(" -- EXERCÍCIO 19 --\n\n");
	
	int i;
	
	printf(" Qual Sua Idade: ");
	scanf("%i", &i);
	
	if (i>=5 && i<=7){
		printf(" Categoria: Infantil A ");
	}
	else if (i>=8 && i<=10){
		printf(" Categoria: Infantil B ");
	}
	else if (i>=11 && i<=13){
		printf(" Categoria: Infanto Juvenil ");
	}
	else if (i>=14 && i<=17){
		printf(" Categoria: Juvenil ");
	}
	else if (i>18){
		printf(" Categoria: Sênior ");
	} 
	else
	printf(" 0 a 4 idade não disponivel");
}

