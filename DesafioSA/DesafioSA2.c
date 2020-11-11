#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int i, turmaA=0, turmaB=0, turmaC=0;
char nome[99], turma, AlunoMaiorNOTA[99], TurmaMaiorNota;
float media, maiorNOTA=0.0, MediaA=0.0, MediaB=0.0, MediaC=0.0, MediaFaculdade=0.0, mediaTurmaA=0.0, mediaTurmaB=0.0, mediaTurmaC=0.0;

int main(){
	for(i=1;i<=1000; i++){
		printf("Se quiser sair digite no nome: sair\n\n");
		fflush(stdin);
		printf("Nome do aluno: ");
		scanf("%[^\n]s", &nome);
		
		if(strcmp(nome, "sair")==0){
			printf("VOCE SAIU DO PROGRAMA :)\n\n");
			break;
		}else{}
		
		fflush(stdin);
		printf("Turma(A, B OU C): ");
		scanf("%c", &turma);
		
		fflush(stdin);
		while(turma != 'A' && turma !='B' &&turma !='C'){
			printf("\nDigite uma TURMA VALIDA (A, B OU C):");
			scanf("%c",&turma);
		}
		
		printf("Media das notas: ");
		scanf("%f", &media);

	
		if(turma=='A'){
			turmaA++;
			MediaA+= media;
		}else
		if(turma=='B'){
			turmaB++;
			MediaB+= media;
		}else{
			turmaC++;
			MediaC+=media;
		}
		
		if(media > maiorNOTA){
			strcpy(AlunoMaiorNOTA, nome);
			maiorNOTA= media;
			TurmaMaiorNota= turma;
		}else{}
		system("cls");
	
	}
	

	
	mediaTurmaA= MediaA/turmaA;
	mediaTurmaB= MediaB/turmaB;
	mediaTurmaC= MediaC/turmaC;
	MediaFaculdade=(mediaTurmaA+mediaTurmaB+mediaTurmaC)/3;

	printf("Total de alunos: %i\n", i-1);
	printf("Media TURMA A: %0.2f | Media TURMA B: %.2f | Media TURMA C: %0.2f", mediaTurmaA,mediaTurmaB,mediaTurmaC);
	printf("\nMedia da Faculdade: %.2f", MediaFaculdade);
	
	printf("\nAluno com maior media: %s |TURMA: %c |MEDIA do aluno: %.2f ", AlunoMaiorNOTA, TurmaMaiorNota,maiorNOTA);
		
	system("pause");
	
	
	
}
