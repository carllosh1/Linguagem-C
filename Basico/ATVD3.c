#include <stdio.h>


float pf, preco, marca;

char nome_marca[26];
int main(){
	
	printf("Marca do Produto: ");
	scanf("%s", &nome_marca);
	
	printf("Preco de fabrica: ");
	scanf("%f", &pf);
	
	
	printf("\nPreco FINAL: ");
	preco = (pf*0.28 + pf*0.45+ pf);
	
	printf("%f", preco);
	
	
}
