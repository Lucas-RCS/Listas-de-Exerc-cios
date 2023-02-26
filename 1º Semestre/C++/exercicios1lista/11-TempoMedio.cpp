/*11. Faça um algoritmo que após a entrada de uma determinada
distância entre dois pontos(Km), e uma determinada velocidade(Km/h),
diga qual o tempo médio que levará para chegada à esse local.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float d, v, t;
printf("Distância: ");
scanf("%f",&d);
printf("Velocidade: ");
scanf("%f",&v);
t=d/v;
printf("\nTempo médio (horas): %.2f\n",t);
}


