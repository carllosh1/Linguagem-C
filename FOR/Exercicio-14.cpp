//Uma empresa com X funcion�rios precisa saber a m�dia de seus sal�rios.
//Fa�a um algoritmo para ler a quantidade de funcion�rios e o sal�rio de cada
//um e escrever a m�dia dos sal�rios.

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
