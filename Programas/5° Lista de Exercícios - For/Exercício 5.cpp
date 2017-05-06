#include<conio.h>
#include<stdio.h>

	main(){
		int cont, v1;
		printf("\n Digite um numero: ");
		scanf("%i", &v1);
			for (cont=0;cont<=10;cont++) {
				printf("\n %i x %i= %i ", v1, cont, cont*v1);
			}
		getch();	
		}
