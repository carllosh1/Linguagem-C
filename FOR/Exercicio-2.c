//Escreva um algoritmo que leia o nome, idade e sexo de 10000 pessoas
//finalizando a digitação quando o nome for igual a espaço. Mostrar o total de
//pessoas digitadas, o percentual de homens e de mulheres, a média de idade
//e o nome e idade da pessoa mais velha e da pessoa mais nova.


#include <stdio.h>
#include <string.h>

int idade, x, idade_maior, idade_menor;
float percentual_m, percentual_h, media, soma_idade=0, homem=0, mulher=0;
char nome[20],  sexo, nomeNovo[20], nomeVelho[20];

int main(){
	printf("COMPLETE COM SEUS DADOS \n");
	
	for(x=1; x<3; x++){
		printf("\n%i-Pessoa \n", x);
		fflush(stdin);	
		printf("\nEntre com seu nome: ");
		scanf("%[^\n]s", nome);
		
	
		if (nome[0] == 32){
		
			break;
		}else{
		}

		printf("Entre com sua Idade: ");
		scanf("%d", &idade);
		if(x==1){
			idade_maior= idade;
			idade_menor = idade;
			strcpy(nomeVelho, nome);
			strcpy(nomeNovo, nome);
			
		}else
			if(idade_maior< idade){
				idade_maior = idade;
				strcpy(nomeVelho, nome);
				
			}else
			
			if(idade_menor> idade){
				idade_menor= idade;
				strcpy(nomeNovo, nome);
			}else{}
			
			soma_idade = soma_idade  + idade;
	
	do{
		printf("Informe seu SEXO (M OU F): ");
		scanf("%s", &sexo);
		}while((sexo != 'M')and(sexo != 'F'));
		
		if(sexo == 'M'){
			homem++;
		}else{
			mulher++;	
		}
	}
	
	media = soma_idade/(x-1); 
	percentual_h = homem/(x-1);
	percentual_m = mulher/(x-1);
	
	printf("\n\nO total de pessoas digitadas: %i", x-1);
	printf("\nMedia das idades: %0.1f", media);
	printf("\nPercentual de homem: %0.0f%C", percentual_h*100, 37);
	printf("\nPercentual de mulher: %0.0f%c", percentual_m*100, 37);
	printf("\nHOMEM= %0.0f  MULHER= %0.0f", homem, mulher); //debug
	printf("\n\nNome do mais velho: %s | Idade: %i", nomeVelho, idade_maior);
	printf("\nNome do mais novo: %s | Idade: %i", nomeNovo, idade_menor);
}
