//Escrever um algoritmo que calcule todos os n�meros inteiros divis�veis por
//um certo valor indicado pelo usu�rio, e compreendidos em um intervalo
//tamb�m especificado pelo usu�rio. O usu�rio deve entrar com um primeiro
//valor correspondente ao divisor e ap�s ele vai fornecer o valor inicial do
//intervalo, seguido do valor final deste intervalo. Usar o comando While.

#include <stdio.h>

int numero, i, divisor, soma=0;

int main(){
	printf("Informe o valor inicial do Intervalo: ");
	scanf("%i", &i);
	printf("Informe o valor final do Intervalo: ");
	scanf("%i", &numero);
	printf("Informe o divisor: ");
	scanf("%i", &divisor);
	while((i<= numero)and(i++)){
	
		if(i%divisor==0){
			soma++;
		}else{}
	}
	printf("\nTotal dos numeros dentro intervalo/divisor: %i", soma);
}
