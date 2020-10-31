//Faça um algoritmo que, para um número indeterminado de pessoas: leia a
//idade de cada uma, sendo que a idade 0 (zero) indica o fim da leitura e não
//deve ser considerada. A seguir calcule:
//• o número de pessoas;
//• a idade média do grupo;
//• a menor idade e a maior idade.

#include <stdio.h>

int i, menor_idade, maior_idade=0, idade, soma;
float media;
char nome;

int main(){
	printf("DADOS:");
	printf("\nPARA PARAR O PROGRAMA IDADE=0\n");
	for(i=1; i<1000000; i++){
		fflush(stdin);
		printf("\nEntre com seu nome: ");
		scanf("%[^\n]s*c", &nome);
		
		printf("Entre com a sua IDADE: ");
		scanf("%i*c", &idade);
		
		if(idade == 0){
			i = i-1;
			break;
		}
		if(i==1){
			maior_idade = idade;
			menor_idade = idade;
		}	if(maior_idade< idade){
				maior_idade = idade;
			}else
			if(menor_idade> idade){
				menor_idade= idade;
			}else{}
			
	soma += idade;
}

 media =(float) soma/i;
 
 printf("\nTotal de pessoas: %i", i);
 printf("\nA maior idade: %i\t|\tA menor idade: %i", maior_idade, menor_idade);
 printf("\nMedia das idade: %0.2f", media);

}

