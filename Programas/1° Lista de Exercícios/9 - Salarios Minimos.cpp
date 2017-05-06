#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		float A,B,C;
		printf("\n Valor Salario Minimo: ");
		scanf("%f", &A);
		printf("\n Valor do Salario do Funcionario: ");
		scanf("%f", &B);
		C=B/A;
		printf("\n Total de Salarios Minimos: %f", C);
		getch();
	}
