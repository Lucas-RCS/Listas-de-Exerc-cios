#include <stdio.h>
#include <math.h>
main(){
float a,b,c,ma,mh,mp, mg;
	printf("==================================================================\n");
	printf("========================== Calculos ==============================\n");
	printf ("==================================================================\n");
	printf(" - Insira o valor de A:\n");
	scanf("%f",&a);
	printf(" - Insira o valor de B:\n");
	scanf("%f",&b);
	printf(" - Insira o valor de C:\n");
	scanf("%f",&c);
	printf("===== Resultados =====\n");
	ma=(a+b+c)/3;
	printf(" - A media Aritmetica eh %.2f\n", ma);
	mh= 3/(1/a+1/b+1/c);
	printf(" - A media Harmonica eh %.2f\n", mh);
	mp=(1*a+2*b+3*c)/(1+2+3);
	printf(" - A media Ponderada eh %.2f\n", mp);
	mg=pow((a*b*c),(1.0/3));
	printf(" - A media Geometrica eh %.2f\n", mg);
}

