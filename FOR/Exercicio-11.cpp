//Faça um algoritmo para ler e escrever o Nome, idade e sexo de 90000
//estudantes. Ao final escreva o total de alunos lidos. O final da leitura
//acontecerá quando for lido o valor zero.

#include <stdio.h>
#include <string.h>
int x, idade, zero;
char sexo,nome, nome_break;
int main(){
	for(x=1; x<=90000; x++){
		printf("\nEntre com seu nome: ");
		scanf("%s", &nome);
		printf("Entre com sua Idade: ");
		scanf("%i", &idade);
		
		do{
		printf("Informe seu SEXO (M OU F): ");
		scanf("%s", &sexo);
		}while((sexo != 'M')and(sexo != 'F'));
		
		do{
		printf("\n0 - PARAR | 1 - CONTINUAR: ");
		scanf("%i", &zero);
		}while((zero != 0)and(zero != 1));
		
	if(zero == 0){
		break;
	}
	
	}
	printf("Numero total de alunos: %i", x);
}
