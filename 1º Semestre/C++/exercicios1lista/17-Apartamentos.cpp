/*17. Um hotel deseja fazer uma promo��o especial de final de
semana, concedendo um desconto de 25% na di�ria. Sendo informados,
o n�mero de apartamentos do hotel e o valor da di�ria por
apartamento para o final de semana completo (sem desconto),
elabore um algoritmo para calcular:
a. Valor promocional da di�ria;
b. Valor total a ser arrecadado caso a ocupa��o neste final de semana atinja 100%;
c. Valor total a ser arrecadado caso a ocupa��o neste final de semana atinja 70%;
d. Valor que o hotel deixar� de arrecadar em virtude da promo��o, caso a ocupa��o atinja 100%.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"");
float nap, vd, vpd, vap, vasp;
printf("N�mero de apartamentos: ");
scanf("%f", &nap);
printf("Valor di�ria: ");
scanf("%f",&vd);
vpd=vd*0.75; // vd-(vd*25/100)
vap=nap*vpd;
vasp=nap*vd;
printf("\nValor promoc. di�ria R$ %.2f",vpd);
printf("\nValor arrec. promoc. ocup.100%% R$ %.2f",vap);
printf("\nValor arrec. promoc. ocup. 70%% R$ %.2f",vap*0.7);
printf("\nValor deixar� de arrecadar R$ %.2f\n",vasp-vap);
}
