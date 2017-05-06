#include<conio.h>
#include<stdio.h>
#include<math.h>

	main() {
		int idade, maior, menor;
		printf("\n Digite sua Idade: ");
		scanf("%i", & idade);
		maior=idade-18;
		menor=18-idade;
		if(idade >= 18){
			printf("Maior de Idade, a %i anos", maior);
		}
		else{
			printf("Menor de Idade, e faltam %i anos para sua maioridade", menor);
		}
		getch();
	}
