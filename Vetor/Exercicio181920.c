/*Faça um algoritmo que carregue:
a. Um vetor com os nomes de 5 produtos;
b. Uma matriz 5x4 com os preços dos 5 produtos em 4 lojas diferentes
(cada linha da matriz corresponde a uma loja);
Diante disso, faça uma segunda matriz 5x4 com os valores dos impostos
destes produtos a partir da seguinte regra:
ate 50 = 5%, entre 50 e 100(inclusive) = 10%, acima de 100 = 20%
Imprima ainda, qual o nome do produto mais caro na loja 3 (terceira linha
da matriz).*/

#include <stdio.h>

int i, j;
float preco[5][4]={550, 520, 600, 488, 
				   404, 432, 454, 420, 
				   201, 215, 220, 198, 
				   190, 230, 187, 144,
				   430, 380, 415, 400}, maior=0;
char loja[5][60]={"SUPREME","Nike","oakley","Patoge","adidas"}; 

int main(){
		printf("----SEM IMPOSTO\n\n");
		printf("------------------------------------------------------------------------\n");
		printf("\t|\tLOJA1\t\tLOJA2\t\tLOJA3\t\tLOJA4  |\n");
	printf("------------------------------------------------------------------------\n");
	for(i=0; i<5;i++){
		printf("%s	|\t", loja[i]);
		for(j=0;j<4;j++){
			
			printf("R$%0.2f\t",preco[i][j]);
			if(j==2){
			 	if(maior<preco[i][j]){
			 		maior = preco[i][j];
				}
			}
 		}
 		printf("\n");
 	}
	
	printf("MAIOR PRECO DA LOJA 3: R$%0.2f\n", maior);
 	
	
	for(i=0; i<5;i++){
		for(j=0;j<4;j++){
			 
			if(preco[i][j] <50){
				preco[i][j]= preco[i][j]+ (preco[i][j] * 0.05);
			}else if(preco[i][j] >=50 && preco[i][j] <=100){
				preco[i][j]= preco[i][j]+ (preco[i][j] * 0.1);
			}else if(preco[i][j]>100){
				preco[i][j]= preco[i][j]+ (preco[i][j] * 0.2);
			}	
			if(j==2){
			 	if(maior<preco[i][j]){
			 		maior = preco[i][j];
				 }
			 }

		}
	}
	printf("\n----COM IMPOSTO\n\n");
	printf("------------------------------------------------------------------------\n");
	printf("\t|\tLOJA1\t\tLOJA2\t\tLOJA3\t\tLOJA4  |\n");
	printf("------------------------------------------------------------------------\n");
	for(i=0; i<5;i++){
		printf("%s	|\t", loja[i]);
		for(j=0;j<4;j++){
			printf("R$%0.2f\t",preco[i][j]);
		}
		printf("\n");
 	}
	
	printf("MAIOR PRECO DA LOJA 3: R$%0.2f\n", maior);
 	
}
