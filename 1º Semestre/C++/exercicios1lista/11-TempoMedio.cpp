/*11. Fa�a um algoritmo que ap�s a entrada de uma determinada
dist�ncia entre dois pontos(Km), e uma determinada velocidade(Km/h),
diga qual o tempo m�dio que levar� para chegada � esse local.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float d, v, t;
printf("Dist�ncia: ");
scanf("%f",&d);
printf("Velocidade: ");
scanf("%f",&v);
t=d/v;
printf("\nTempo m�dio (horas): %.2f\n",t);
}


