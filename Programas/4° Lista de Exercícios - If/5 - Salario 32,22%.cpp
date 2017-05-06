#include<conio.h>
#include<stdio.h>
#include<math.h>
	//5)Faça um programa, na Linguagem C, que o usuário forneça o setor que trabalha e o salário. 
	//Caso o setor seja de Venda 'V', ele terá um aumento de 32.22% no salário. Apresentar o salário final.
	main() {
		float salant, salatu;
		char setor;
		
		printf("\n Digite o Setor: ");
		scanf("%c", & setor);
		printf("\n Digite o Salario: ");
		scanf("%f", & salant);
		
		salatu = salant*0.3222;
		
		if(setor=='V' ||setor=='v'){
			printf("\n O Salario Atual e: %f ", salatu);
		}
		else{
			printf("\n O salario é: %f ", salant);
		}
		getch();
	}

