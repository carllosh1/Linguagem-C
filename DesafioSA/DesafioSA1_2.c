#include <stdio.h>
#include <stdlib.h>

int i, sim_nao, x;
float valor[1000], preco[1000], somapreco;

int main(){
	for(i=0; i<1000;i++){
		printf("%i - Livro | Preco(00.00):", i+1);
		scanf("%f", &valor[i]);
	
		preco[i] = valor[i] - (valor[i]* 0.15);
		x++;
		
		 printf("\nVoce deseja sair?\nSe SIM digite:0 |Se NAO digite:1\n->");
		 scanf("%i", &sim_nao);
		 
		 if(sim_nao == 0){
		 	break;
		 }else{}
		 
		 system("cls");
	}

	for(i=0; i<x; i++){
		printf("%i- Livro | Preco com desconto: %0.2f\n", i+1, preco[i]);
		somapreco += preco[i];
	}
	
	printf("\n\nVALOR FINAL: %0.2f", somapreco);
}
