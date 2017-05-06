#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		int A,B,C,D,E;
		printf("\n Digite A: ");
		scanf("%i", &A);
		printf("\n Digite B: ");
		scanf("%i", &B);
		C=pow(A,2);
		D=pow(B,2);
		E=C+D;
		printf("\n Quadrado de A: %i\n Quadrado de B: %i\n Soma dos Quadrados: %i", C, D, E);
		getch();
	}
