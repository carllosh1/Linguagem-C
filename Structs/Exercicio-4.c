/* Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matricula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos.  ´
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral.  ´
(d) Encontre o aluno com menor media geral  ´
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovac ¸ao. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int matricula;
	char nome[999];
	float nota[3];
}TipoAluno;

int main(){
	TipoAluno aluno[5];
	
	int i, j;
	float somanota[5], medianota[5], maiorNota=0.0, menorMedia=999.0, maiorMedia=0.0;
	char alunoMaior[999], alunoMaiorM[999], alunoMenorM[999];
	
	for(i=0; i<5; i++){
		printf("%i-Aluno(a)\n\n", i+1);
		printf("Entre com o numero de matricula:");
		scanf("%i", &aluno[i].matricula);
		
		fflush(stdin);
		printf("Entre com o Nome do aluno:");
		scanf("%[^\n]s", &aluno[i].nome);
		
		for(j=0; j<3; j++){
			printf("Entre com a nota da %i prova: ", j+1);
			scanf("%f", &aluno[i].nota[j]);
			somanota[i]+= aluno[i].nota[j];
		}
		
		medianota[i]= somanota[i]/3;	
		
		system("cls");
	}
	
	for(i=0; i<5; i++){
		if(aluno[i].nota[0]>maiorNota){
			
			maiorNota=aluno[i].nota[0];
			
			
			strcpy(alunoMaior, aluno[i].nome);
		}
		
		if(medianota[i]> maiorMedia){
			maiorMedia=medianota[i];
			
			strcpy(alunoMaiorM, aluno[i].nome);
		}else
		if(medianota[i]< menorMedia){
			menorMedia=medianota[i];
			
			strcpy(alunoMenorM, aluno[i].nome);
		}
	}
	for(i=0; i<5; i++){
	
		if(medianota[i]>=6){
			printf("%i- Aluno(a): %s | Resultado: Aprovado\n", i+1, aluno[i].nome);
		}else{
			printf("%i- Aluno(a): %s | Resultado: Reprovado\n", i+1, aluno[i].nome);
		}
	
	}
	
	
	
	printf("O aluno com maior nota na primeira prova: %s\n", alunoMaior);
	
	printf("O aluno com maior media: %s | o aluno com menor media: %s", alunoMaiorM, alunoMenorM);		
}
