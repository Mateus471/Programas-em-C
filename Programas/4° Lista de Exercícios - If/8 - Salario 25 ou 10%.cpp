#include<conio.h>
#include<stdio.h>
#include<math.h>

	main(){
		float A, B, C;
		 printf("\n Digite o Salario: ");
		 scanf("%f", &A);
		 
		 B = A + (A * 0.1);
		 C = A + (A * 0.25);
		 if(A>=2500){
			printf("O Salario e: %f", B);
		 }
		 else{
		 	printf("O Salario e: %f", C);
		 }
		getch();
		}
