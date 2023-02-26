/*3.(4,0) Desenvolver um programa que leia 
30 vezes o valor de um número inteiro e a 
operação desejada; calcule, então, a resposta adequada.
Utilize os códigos a seguir para ler qual a operação escolhida.
1 –Mostrar  a  sequência  de  Fibonacci  (o  número  que  o  usuário  
digitou  é  a quantidade de termos que deve ser mostrada);
2 –Imprimir os números primos de 1 até o valor digitado;
3 –Mostrar a soma de 1 até o valor digitado.*/
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
		printf("- Sequência %i -\n\n", c);
		printf("Número: ");
		scanf("%i", &n);
		printf("Operação: (1| 2 | 3): ");
		scanf("%i", &o);
		if (o==1){
			if (n <= 1) {
    			printf("Termos inválido\n");
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

