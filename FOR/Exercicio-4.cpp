//Escreva um algoritmo que leia um número N que indica quantos valores
//devem ser lidos a seguir. Para cada número lido mostre como resultado o
//valor lido e o fatorial deste valor.

#include <stdio.h>
#include <stdlib.h>

int n,fatorial,x,n1;

int main(){
	
	printf("Insira o numero de valores a serem digitados: ");
	scanf("%i", &n);
	system("cls");
	for(x=1; x<=n; x++){
		printf("\nInsira um valor: ");
		scanf("%i", &n1);
		system("cls");
		printf("Valor lido: %i", n1);


		if(n1 == 0){
		fatorial = 1;
		}else if (n1<0){	
		printf("\nNAO EXISTE FATORIAL DE NUMERO NEGATIVO!\n");
		}else if(n1>16){
		printf("\nNUMERO MUITO GRANDE PARA SER CALCULADO\n");
		}else{
		for(fatorial = 1; n1 > 1; n1--)
		fatorial = fatorial * n1;
		printf("\nFatorial calculado: %d\n", fatorial);
		}
	}
}
	

	


	
	
	
	
	




