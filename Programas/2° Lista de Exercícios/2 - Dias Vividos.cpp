#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		int A,B,C,D,E,F;
		printf("\n Anos: ");
		scanf("%i", &A);
		printf("\n Meses: ");
		scanf("%i", &B);
		printf("\n Dias: ");
		scanf("%i", &C);
		D=A*365;
		E=B*30;
		F=D+E+C;
		printf("\n Dias Vividos: %i", F);
		getch();
	}
