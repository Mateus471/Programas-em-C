#include<conio.h>
#include<stdio.h>
#include<math.h>

	main() {
		char sexo;
		float alt, altm, altf;
		printf("\n Digite o Sexo (M ou F): ");
		scanf("%c", & sexo);
		printf("\n Digite a Altura: ");
		scanf("%f", &alt);
		altm=pow (alt,2)*23;
		altf=pow (alt,2)*22;
		if(sexo=='M' ||sexo=='m'){
			printf("O peso ideal e %f", altm);
		}
		else{
			printf("O peso ideal e %f", altf);
		}
		getch();
	}
