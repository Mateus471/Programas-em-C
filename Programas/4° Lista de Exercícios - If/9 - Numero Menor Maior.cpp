#include<conio.h>
#include<stdio.h>
#include<math.h>

	main(){
		float A, B, C;
		 
		 printf("\n Digite o primeiro numero: ");
		 scanf("%f", &A);
		 printf("\n Digite o segundo numero: ");
		 scanf("%f", &B);

		 if(A>B){
			printf("O primeiro numero e o maior: %f", A);
		 }
		 else{
		 	printf("O segundo numero e o maior %f", B);
		 }
		getch();
		}
