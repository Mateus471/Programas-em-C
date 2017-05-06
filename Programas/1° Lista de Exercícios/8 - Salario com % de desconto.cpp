#include<conio.h>
#include<stdio.h>
#include<math.h>
	main(){
		float VS,PD,SF;
		printf("\n Digite o Valor do Salario: ");
		scanf("%f", &VS);
		printf("\n Digite o Percentual de Desconto: ");
		scanf("%f", &PD);
		SF=VS-(VS*(PD/100));
		printf("\n Resultado= %f", SF);
		getch();
	}
