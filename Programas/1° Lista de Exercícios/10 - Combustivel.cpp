#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		float A,B,C,D,E;
		printf("\n Preco do Litro: ");
		scanf("%f", &A);
		printf("\n Distancia Por Litro: ");
		scanf("%f", &B);
		printf("\n Distancia Desejada: ");
		scanf("%f", &C);
		D=B*C;
		E=D*A;
		printf("\n Quantos Litros Serao Necessarios: %f\n Quanto sera Gasto: %f", D, E);
		getch();
	}
