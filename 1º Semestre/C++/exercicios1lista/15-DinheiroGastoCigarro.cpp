/*15. Calcular a quantidade dinheiro gasta por um
fumante. Leia o número de anos que ele fuma, o nº de
cigarros fumados por dia e o preço de uma carteira.
Considere que cada carteira possua 20 cigarros e um
total de 365 dias no ano.*/
#include<stdio.h>
main(){
float na, qcd, pc, vg;
printf("Número de anos: ");
scanf("%f",&na);
printf("Qtde. de cigarros por dia: ");
scanf("%f",&qcd);
printf("Preço da carteira: ");
scanf("%f",&pc);
vg=na*365*qcd/20*pc;
printf("\nValor gasto R$ %.2f\n",vg);
}
