//Uma turma possui N alunos, e para cada aluno tem-se uma m�dia para cada
//disciplina. O professor de Matem�tica precisa saber a m�dia geral de sua
//disciplina em uma turma. Fa�a um algoritmo para auxiliar a encontrar este
//valor.

#include <stdio.h>

int x, alunos;
char nome, disciplina;
float nota, soma_nota, media;

int main(){
	printf("Disciplina: ");
	scanf("%s", &disciplina);
	
	printf("\nInforme o numero de alunos: ");
	scanf("%i", &alunos);
	
	for(x=1; x<=alunos; x++){
	
	
	printf("\n%i - Nome do aluno: ", x);
	scanf("%s", &nome);
	
	printf("Nota do aluno:	");
	scanf("%f", &nota);
	
	soma_nota = soma_nota + nota;
	
} 
	media = soma_nota/alunos;
	
	printf("\nA MEDIA geral Eh: %0.2f", media);
	
}
