/*17. Um hotel deseja fazer uma promoção especial de final de
semana, concedendo um desconto de 25% na diária. Sendo informados,
o número de apartamentos do hotel e o valor da diária por
apartamento para o final de semana completo (sem desconto),
elabore um algoritmo para calcular:
a. Valor promocional da diária;
b. Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%;
c. Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
d. Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"");
float nap, vd, vpd, vap, vasp;
printf("Número de apartamentos: ");
scanf("%f", &nap);
printf("Valor diária: ");
scanf("%f",&vd);
vpd=vd*0.75; // vd-(vd*25/100)
vap=nap*vpd;
vasp=nap*vd;
printf("\nValor promoc. diária R$ %.2f",vpd);
printf("\nValor arrec. promoc. ocup.100%% R$ %.2f",vap);
printf("\nValor arrec. promoc. ocup. 70%% R$ %.2f",vap*0.7);
printf("\nValor deixará de arrecadar R$ %.2f\n",vasp-vap);
}
