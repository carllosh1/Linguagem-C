//Faça um algoritmo que, para um número indeterminado de pessoas: leia a
//idade de cada uma, sendo que a idade 0 (zero) indica o fim da leitura e não
//deve ser considerada. A seguir calcule:
//• o número de pessoas;
//• a idade média do grupo;
//• a menor idade e a maior idade.

#include <stdio.h>
#include <stdlib.h>

int i=0, menor_idade=999, maior_idade=0, idade=1, soma, sair=-1;
float media;
char nome;

int main(){
	
	
	while(sair!=0){
		printf("DADOS:");
		i++;
		fflush(stdin);
		printf("\nEntre com seu nome: ");
		scanf("%[^\n]s*c", &nome);
		
		printf("Entre com a sua IDADE: ");
		scanf("%i*c", &idade);
		do{
			printf("\nVoce deseja continuar o programa?\n SIM(1) | NAO(0)");
			scanf("%i", &sair);
		}while((sair != 1)&&(sair != 0));
		
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
	system("cls");
}
	

 media =(float) soma/i;
 
 printf("\nTotal de pessoas: %i", i);
 printf("\nA maior idade: %i\t|\tA menor idade: %i", maior_idade, menor_idade);
 printf("\nMedia das idade: %0.2f", media);

}

