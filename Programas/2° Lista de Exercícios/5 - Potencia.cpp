#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		int A,B,C;
		printf("\n Numero: ");
		scanf("%i", &A);
		printf("\n Potencia: ");
		scanf("%i", &B);
		C=pow(A,B);
		printf("\n %i elevado a %i= %i", A, B, C);
		getch();
	}
