#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		float A,B,C,D;
		printf("\n Valor da Compra: ");
		scanf("%f", &A);
		printf("\n Taxa de Juros: ");
		scanf("%f", &B);
		printf("\n Quantidade de Dias em Atraso: ");
		scanf("%f", &C);
		D=A+(A*(B/100)*C);
		printf("\n Valor a Pagar: %f", D);
		getch();
	}
