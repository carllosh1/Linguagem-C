//Escrever um algoritmo que calcule todos os n�meros inteiros divis�veis por
//um certo valor indicado pelo usu�rio, e compreendidos em um intervalo
//tamb�m especificado pelo usu�rio. O usu�rio deve entrar com um primeiro
//valor correspondente ao divisor e ap�s ele vai fornecer o valor inicial do
//intervalo, seguido do valor final deste intervalo. Usandd while.

#include <stdio.h>

int numero_final, i=0, divisor, soma=0,numero_inicial;

int main(){
	printf("Informe o valor inicial do Intervalo: ");
	scanf("%i", &numero_inicial);
	printf("Informe o valor final do Intervalo: ");
		scanf("%i", &numero_final);
		if(numero_final <= numero_inicial){
		
		do{
			printf("VALOR FINAL TEM QUE SER MAIOR QUE O INICIAL: ");
			scanf("%i", &numero_final);
		}while(numero_final <= numero_inicial);
	}
	
	printf("Informe o divisor: ");
	scanf("%i", &divisor);
	
	while(numero_inicial!=numero_final){
		if(numero_inicial%divisor==0){
			soma++;
		}else{}
		
		numero_inicial++;	
	}
	if(numero_final%divisor==0){
			soma++;
		}else{}
		
	printf("\nTotal de numeros divisiveis dentro do intervalo: %i", soma);
}
