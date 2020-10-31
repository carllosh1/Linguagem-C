//Uma empresa com X funcionários precisa saber a média de seus salários.
//Faça um algoritmo para ler a quantidade de funcionários e o salário de cada
//um e escrever a média dos salários.

#include <stdio.h>

int x, funcionario;
char nome;
float media, salario, soma_salario;

int main(){
	printf("Entre com o numero de funcionarios: ");
	scanf("%i", &funcionario);
	
	for(x=1; x<=funcionario; x++){
		printf("\nNome do funcionario: ");
		scanf("%s", &nome);
		
		printf("Salario: ");
		scanf("%f", &salario);
		
		soma_salario = soma_salario + salario;
	}
	
	media = soma_salario/funcionario;
	
	printf("A media de salarios eh: %0.2f", media);
}
