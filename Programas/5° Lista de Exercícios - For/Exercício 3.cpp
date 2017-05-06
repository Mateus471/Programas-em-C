#include<conio.h>
#include<stdio.h>

	main(){
		int cont, A, B;
			printf("\n Digite o 1 numero ");
			scanf("%i", &A);
			printf("\n Digite o 2 numero ");
			scanf("%i", &B);
			
				if (A>B) {
					for (cont=A;cont>=B;cont--) {
				printf("\n %i", cont);
				}
				} 
				else {
					for (cont=A;cont<=B;cont++) {
				printf("\n %i", cont);
				}
			}
		getch();
		}
