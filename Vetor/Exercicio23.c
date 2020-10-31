/*Escreva um algoritmo que leia 6 números inteiros digitados pelo usuário e
os armazene em um vetor chamado jogador. O algoritmo deverá sortear 10
números inteiros e armazená-los em um vetor chamado sorteados. Depois o
algoritmo deverá comparar os números digitados pelo jogador com os
números sorteados. Se encontrar 4 números escreva a mensagem “Você
acertou 4 números”, se encontrar 5 números escreva a mensagem “Você
acertou 5 números”, se encontrar 6 números então o algoritmo deverá
imprimir “Você acertou todos os números”. Caso o algoritmo não encontre
nenhum número ele deverá imprimir a mensagem “Você acertou menos
pontos”.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int jogador[10], sorteados[10], i,j, acertou=0;

int main(){
	srand(time(NULL));
	
	printf("Tente ACERTAR O MAXIMO DE NUMEROS:\n\n");
	
	for(i=0;i<6;i++){
		printf("Os numeros sorteado esta entre 0 e 100: ");
		scanf("%i", &jogador[i]);
			
	}
	
	for(i=0; i<10; i++){
		sorteados[i] = rand () % 101;
	}
	
	printf("\nSorteados:");
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(jogador[i]==sorteados[j]){
				acertou++;
			}else{}
		}
		printf("|%i|", sorteados[i]);
	}
	
	if(acertou==4){
		printf("\n\nVoce acertou %i/6 numeros\n", acertou);
	}else if(acertou==5){
		printf("\n\nVoce acertou %i/6 numeros\n", acertou);
	}else if(acertou==6){
		printf("\n\nVoce acertou TODOS\n");
	}else{
		printf("\n\nVoce acertou Menos: %i/6\n", acertou);
	}
	
	system("pause");
	
}

		
