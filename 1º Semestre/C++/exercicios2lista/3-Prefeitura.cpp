/*3. A prefeitura abriu uma linha de cr�dito para os funcion�rios estatut�rios.
O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto.
Fa�a um programa que leia o sal�rio bruto e o valor da presta��o e informar se o empr�stimo pode ou n�o ser concedido.*/
#include<stdio.h>
#include<locale.h>
main(){           setlocale(LC_ALL,"Portuguese");
		printf(" -- EXERC�CIO 3 --\n\n");
     float sb, p, valor;

     printf(" Valor do sal�rio bruto: ");
	 scanf("%f",&sb);
     printf(" Valor da presta��o: ");
     scanf("%f",&p);

     valor =sb*0.30;

     if(p<=valor){		
         printf("\n- Pode ser concedido!");       
     } else{
       printf("\n- N�o pode ser concedido!");         	
     }
}

