#include <stdio.h>
#include <stdlib.h>

int i;

float nota[4], media, somaNota;
char nome;

int main(){
	
	printf("Entre com o Nome do aluno:");
	scanf("%s", &nome);
	printf("\n");
	for(i=0; i<4; i++){
		printf("Informe o valor da nota(0.0): ");
		scanf("%f", &nota[i]);
		
		
		somaNota += nota[i];
	}
	system("cls");
	
	
	media = somaNota/i;
	for(i=0; i<4; i++){
		printf("|%i - NOTA: %0.2f|\t", i+1, nota[i]);
	}
	printf("\nTOTAL: %0.2f", somaNota);
	printf("\nMedia das notas eh: %0.2f", media);
}
