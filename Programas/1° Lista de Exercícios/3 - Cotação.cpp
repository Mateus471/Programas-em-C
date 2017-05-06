#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		float CD,VD,VR;
		printf("\n Digite a Cotacao do Dolar: ");
		scanf("%f", &CD);
		printf("\n Digite o Valor em Dolares: ");
		scanf("%f", &VD);
		VR=CD*VD;
		printf("\n O Valor em Reais e: %f", VR);
		getch();
	}
