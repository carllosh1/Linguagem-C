/*Escreva um algoritmo que leia 6 n�meros inteiros digitados pelo usu�rio e
os armazene em um vetor chamado jogador. O algoritmo dever� sortear 10
n�meros inteiros e armazen�-los em um vetor chamado sorteados. Depois o
algoritmo dever� comparar os n�meros digitados pelo jogador com os
n�meros sorteados. Se encontrar 4 n�meros escreva a mensagem �Voc�
acertou 4 n�meros�, se encontrar 5 n�meros escreva a mensagem �Voc�
acertou 5 n�meros�, se encontrar 6 n�meros ent�o o algoritmo dever�
imprimir �Voc� acertou todos os n�meros�. Caso o algoritmo n�o encontre
nenhum n�mero ele dever� imprimir a mensagem �Voc� acertou menos
pontos�.*/

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

		
