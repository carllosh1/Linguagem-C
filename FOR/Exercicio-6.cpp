//Escreva um algoritmo para ler o primeiro nome, o sobrenome e o ano de
//nascimento de 5 pessoas. Escrever o nome completo e a idade da terceira
//pessoa, calcular e escrever a soma das cinco idades lidas.


#include <stdio.h>
#include <string.h>

int x, idade, somaIdade=0, ano, idade3;
char sobrenome3[20], nome3[20], nome[20], sobrenome[20];

int main(){
	for(x=1; x<5; x++){
		printf("\n%i-Pessoa \n", x);
		printf("Escreva seu nome: ");
		scanf("%s", &nome);
		printf("Escreva seu sobrenome: ");
		scanf("%s", &sobrenome);
		printf("Escreva seu ano de nascencia: ");
		scanf("%i", &ano);	
	
	idade = 2020 - ano;	
	somaIdade  = somaIdade + idade;	
	
	if(x==3){
		strcpy(nome3, nome);
		strcpy(sobrenome3, sobrenome);
		idade3 = idade;
	}

	}
		
		
		
		printf("\nNome da 3 pessoa: %s", &nome3); 
		 printf(" %s", &sobrenome3);
		printf("\nIdade da 3 pessoa: %i", idade3);
			
		printf("\nSoma das idades: %i", somaIdade);
	
}






















