#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		int A,B,C,D;
		printf("\n Velocidade Inicial: ");
		scanf("%i", &A);
		printf("\n Aceleracao: ");
		scanf("%i", &B);
		printf("\n Tempo: ");
		scanf("%i", &C);
		D=A+(B*C);
		printf("\n Velocidade: %i", D);
		getch();
	}
