/*3.(4,0) Desenvolver um programa que leia 
30 vezes o valor de um n�mero inteiro e a 
opera��o desejada; calcule, ent�o, a resposta adequada.
Utilize os c�digos a seguir para ler qual a opera��o escolhida.
1 �Mostrar  a  sequ�ncia  de  Fibonacci  (o  n�mero  que  o  usu�rio  
digitou  �  a quantidade de termos que deve ser mostrada);
2 �Imprimir os n�meros primos de 1 at� o valor digitado;
3 �Mostrar a soma de 1 at� o valor digitado.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	long int a, b, cf;
	int c, n, o, s=1, cp, q, cont, c1, x;
	double r;
	for (c=1; c<=30; c++){
		printf("- Sequ�ncia %i -\n\n", c);
		printf("N�mero: ");
		scanf("%i", &n);
		printf("Opera��o: (1| 2 | 3): ");
		scanf("%i", &o);
		if (o==1){
			if (n <= 1) {
    			printf("Termos inv�lido\n");
  			} else {
    			a = 1;
    			b = 1;
    			cont = 2;
    			printf("\n1 1 ");
			    while(cont < n) {
			    	cf = a + b;
			    	r = cf;
			    	r = r/b;
			    	printf("%ld ", cf);
			    	a = b;
			    	b = cf;
			    	cont = cont + 1;
    			}
  			}
  			printf("\n\n");
		} else if (o==2){
			while(s<=n){
				cp=2;
				q=0;
				while(cp<=s/2){
					if(s%cp==0){
						q++;
						break;
					}
				cp++;
				}
				if(q==0){
					printf("%i ", s);
				}
			s++;
			}	
			printf("\n\n");
		} else if (o==3){
			for (c1=1; c1<=n; c1++){
				x+=c1;
			}
			printf("Soma: %i ", x);
		}
	}
}

