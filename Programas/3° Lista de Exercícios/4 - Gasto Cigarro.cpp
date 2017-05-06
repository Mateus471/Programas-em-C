#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		float A,B,C,D;
		printf("\n Numero de Anos que Fuma: ");
		scanf("%f", &A);
		printf("\n Numero de Cigarros por Dia: ");
		scanf("%f", &B);
		printf("\n Preco da Carteira de Cigarros: ");
		scanf("%f", &C);
		D=(((A*365)*B/20)*C);
		printf("\n Quantidade Gasta com Cigarros: %f", D);
		getch();
	}
