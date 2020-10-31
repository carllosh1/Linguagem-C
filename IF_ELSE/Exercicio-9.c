//Escreva um algoritmo que leia o código de origem de um produto e imprima
//na tela a região de sua procedência conforme a tabela abaixo:
//código 1 : Sul código 5 ou 6 : Nordeste
//código 2 : Norte código 7, 8 ou 9 : Sudeste
//código 3 : Leste código 10 : Centro-Oeste
//código 4 : Oeste código 11 : Noroeste
//Observação: Caso o código não seja nenhum dos especificados o produto
//deve ser encarado como Importado.

#include <stdio.h>


int produto;
char nome;

int main(){
	
	12 > produto >= 1;
	
		printf("Nome do Produto: ");
		scanf("%s", &nome);
		printf("Codigo do produto: ");
		scanf("%i", &produto);
	
		if(produto == 1) {
			printf("\nRegiao: SUL");
		}else if(produto == 2) { 
			printf("\nRegiao: norte");
		}else if(produto == 3) { 
			printf("\nRegiao: oeste"); 
		}	else if(produto == 2) { 
			printf("\nRegiao: leste");
		}else if(produto == 5 || produto == 6) { 
			printf("\nRegiao: nordeste");
		}else if(produto == 7|| produto ==8 || produto ==9) { 
			printf("\nRegiao: sudeste");
		}else if(produto == 10) { 
			printf("\nRegiao: centro-oeste");
		}else if(produto == 11) { 
			printf("\nRegiao: noroeste");
		}else {
			printf("\nImportado");
		}
		
		printf("\nProduto: %s", &nome);
		}
		
	
	
	
