/* Construir um algoritmo para cada caso, utilizando fun��es e reduzindo ao
m�ximo o uso de vari�veis globais:
? Solicitar ao usu�rio um n�mero e exibir o seu cubo. Fun��o deve receber o
n�mero e retornar o cubo correspondente.
? Solicitar ao usu�rio a idade (em anos ) e exibir o n�mero de dias vividos at�
o �ltimo anivers�rio. Fun��o deve receber a idade e retornar o n�mero de
dias vividos. */

#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int cubo(int n){
	int resultado;
	
	resultado = pow(n,3);
	
	return(resultado);
}

int anosVIVO(int bissexto, int normal){
	int resultado;
	
	
	resultado = (bissexto*366) + (normal * 365);
	
	return(resultado);
}

int n, resultado, idade, bissexto=0, normal=0;

int main(){
	printf("Informe um valor: ");
	scanf("%d", &n);
	
	resultado= cubo(n);
	
	printf("\nO cubo desse valor eh: %d\n", resultado);
	
	system("pause");
	system("cls");
	resultado=0;
	
	printf("Informe um idade: ");
	scanf("%d", &idade);
	
	while(idade!=0){
		if((2020-idade)%4==0){
		bissexto++;
		idade--;
	}else {
		normal++;
		idade--;
	}
	}
	
	resultado=anosVIVO(bissexto, normal);
	
	printf("\nVoce esta vivo a %d dias do seu primeiro ate seu ultimo aniversario", resultado);
}

