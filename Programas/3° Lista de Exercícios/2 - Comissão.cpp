#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		float A,B,C,D,E;
		printf("\n Vendedor: ");
		scanf("%f", &A);
		printf("\n Codigo da Peca: ");
		scanf("%f", &B);
		printf("\n Preco Unitario da Peca: ");
		scanf("%f", &C);
		printf("\n Quantidade Vendida: ");
		scanf("%f", &D);
		E=((C*D)*0,05);
		printf("\n Comissao:R$%f", E);
		getch();
	}
