#include<conio.h>
#include<stdio.h>
#include<math.h>
	//5)Fa�a um programa, na Linguagem C, que o usu�rio forne�a o setor que trabalha e o sal�rio. 
	//Caso o setor seja de Venda 'V', ele ter� um aumento de 32.22% no sal�rio. Apresentar o sal�rio final.
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
			printf("\n O salario �: %f ", salant);
		}
		getch();
	}

