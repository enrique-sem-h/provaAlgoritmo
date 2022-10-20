#include <stdio.h>
#include <math.h>

int main(){
	printf("Nome da disciplina: Algoritmo e Programacao\nNome do professor: Joyce Siqueira\nNome completo do aluno: Enrique de Lima Carvalho\n");
	printf("Matricula: UC22103250\nCurso: Engenharia de Software\nLink do Repositorio: https://github.com/enrique-sem-h/provaAlgoritmo\n");
	printf("Software utilizado: Dev-C++\n");
	
	char opcaoMenu;
	
	printf("\nDigite a opcao desejada:\nA - Questao A\nB - Questao B\nC - Questao C\n");
	scanf("%c", &opcaoMenu);
	
	switch(opcaoMenu)
	{
		case 'A':
			float catop, catad, hip, seno;
			
			printf("Digite o valor para o cateto oposto: ");
			scanf("%f", &catop);
			
			printf("Digite o valor para o cateto adjacente: ");
			scanf("%f", &catad);
			
			hip = sqrt(pow(catop,2) + pow(catad,2));
			seno = catop / hip;
			
			printf("Hipotenusa: %.3f\nSeno: %.3f", hip, seno);
			break;

		case 'B':
			char nome[100];
			int ano;
			
			fflush(stdin);
			printf("Digite o nome do usuario: ");
			scanf("%s", &nome);
			fflush(stdin);
			
			printf("Digite um ano valido(entre 1900 e 2022): ");
			scanf("%d", &ano);
			
			if((ano % 4 == 0 && ano % 100 != 0) || (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0))
				printf("Nome: %s, %d e um ano bissexto", nome, ano);
			else
				printf("Nome: %s, %d nao e um ano bissexto", nome, ano);
				
			break;

		default: 
			printf("Opcao Invalida");
	}

}
