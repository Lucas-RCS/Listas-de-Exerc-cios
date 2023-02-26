/*3. A prefeitura abriu uma linha de crédito para os funcionários estatutários.
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto.
Faça um programa que leia o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido.*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
		printf(" -- EXERCÍCIO 3 --\n\n");
     float sb, p, valor;

     printf(" Valor do salário bruto: ");
	 scanf("%f",&sb);
     printf(" Valor da prestação: ");
     scanf("%f",&p);

     valor =sb*0.30;

     if(p<=valor){		
         printf("\n- Pode ser concedido!");       
     } else{
       printf("\n- Não pode ser concedido!");         	
     }
}

