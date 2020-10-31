/* Ler 2 vetores A e B de 5 elementos. Construir uma matriz C, onde a primeira
linha contenha os elementos de A e a segunda linha contenha os elementos
de B. */

#include <stdio.h>

int vetorA[5], vetorB[5], i, matriz[2][5], j;

int main(){
	for(i=0; i<5; i++){
		printf("Entre com o %i do VETOR A:", i+1);
		scanf("%i", &vetorA[i]);
		
		printf("Entre com o %i do VETOR B:", i+1);
		scanf("%i", &vetorB[i]);
		printf("\n");
	}
	
	for(i=0; i<5; i++){
		matriz[0][i]= vetorA[i];
		matriz[1][i]= vetorB[i];
	}
	
	for(i=0; i<2; i++){
		for(j=0;j<5;j++){
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
}
