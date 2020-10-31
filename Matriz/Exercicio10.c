/* Utilizando uma matriz 3x3 construa um algoritmo que preencha a matriz e:
a. Mostre os elementos da diagonal principal (linha = coluna)
b. Calcule a média dos elementos da matriz;
c. Calcule quantos valores da matriz estão acima da média calculada. */

#include<stdio.h>

int matriz[3][3], i, j, soma=0, somaAcimaMedia=0, vetor[3];
float media;

int main(){
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			
			printf("Entre com o valor da Matriz[%i][%i]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
			if( i == j){
				vetor[i]= matriz[i][j];
			}else{}
			
			soma += matriz[i][j];
		}
	}
	system("cls");
	media =(float)soma/(j*i);
		
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			if(matriz[i][j]> media)
				somaAcimaMedia++;
			}
			
		printf("Valor da diagonal principal: %i\n", vetor[i]);
	
	}
	
	
	printf("Media dos Valores na matriz: %0.2f",  media);
	printf("\nQuantidade de valores maior que a media: %i", somaAcimaMedia);
}
