/* 17. Faça um programa que leia a nota e o número de
faltas de um aluno e escreva seu conceito de acordo
com a tabela.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float nota, falta;
printf("Nota: ");
scanf("%f",&nota);
printf("Falta: ");
scanf("%f",&falta);
if(falta<=10){
	if(nota>=9)
	printf("\nConceito: A\n");
		else if(nota>=7.5)
		printf("\nConceito: B\n");
			else if(nota>=5.0)
			printf("\nConceito: C\n");
				else if(nota>=4)
				printf("\nConceito: D\n");
					else
					printf("\nConceito: E\n");
					} else {
					if(nota>=9)
					printf("\nConceito: B\n");
						else if(nota>=7.5)
						printf("\nConceito: C\n");
							else if(nota>=5.0)
							printf("\nConceito: D\n");
								else
								printf("\nConceito: E\n");
							}
						}



