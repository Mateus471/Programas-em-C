#include<conio.h>
#include<stdio.h>
#include<math.h>

	main(){
		int A, B, C;
		 printf("\n Digite um numero: ");
		 scanf("%i", &A);
		 
		 B = sqrt (A);
		 C = B + 3;
		 if(B>7){
			printf("A raiz do numero + 3 e: %i", C);
		 }
		 else{
		 	printf("A raiz do numero e: %i", B);
		 }
		getch();
		}
