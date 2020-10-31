//Escreva um algoritmo que leia um conjunto de 50 registros contendo, cada
//uma delas, a altura e o sexo de uma pessoa, calcule e mostre o seguinte:
//a) a maior e a menor altura da turma
//b) a média da altura das mulheres
//c) a média da altura da turma.
//d) A maior e a menor altura dos homens


#include <stdio.h>
#include <string.h>

int x, homem, mulher;
float altura=0, altura_maior=0, altura_menor=0, media_altura_turma=0, soma_altura_turma,
maior_altura_homem=0, menor_altura_homem=0,
maenor_altura_mulher=0, soma_altura_feminina=0, media_altura_mulher=0;
char   sexo;

//a maior e a menor altura da turma//
//b) a média da altura das mulheres///
//c) a média da altura da turma.
//d) A maior e a menor altura dos homens

int main(){
	printf("SEUS DADOS\n");
	
	for(x=1; x<5; x++){

		printf("\nEntre com sua Altura(0.00): ");
		scanf("%f", &altura);
		if(x==1){
			altura_maior= altura;
			altura_menor = altura;
		}
			if(altura_maior< altura){
				altura_maior = altura;
				
				
			}else{}
			
			if(altura_menor> altura){
				altura_menor = altura;
			}else{}
			
			soma_altura_turma = soma_altura_turma + altura;
			

	do{
		printf("Informe seu SEXO (M OU F): ");
		scanf("%s", &sexo);
		}while((sexo != 'M')and(sexo != 'F'));
		
		if(sexo == 'M'){
			homem++;
			maior_altura_homem= altura_maior;
			menor_altura_homem=altura_menor;
		}else{
			mulher++;
			soma_altura_feminina = soma_altura_feminina + altura;	
		}		
			media_altura_mulher = soma_altura_feminina/mulher;	
			media_altura_turma = soma_altura_turma/(x-1);
	}
	
	printf("\n\nMaior ALTURA: %0.2f", altura_maior);
	printf("\nMenor ALTURA: %0.2f", altura_menor);
	printf("\nMedia feminina: %0.2f", media_altura_mulher);
	printf("\nMaior altura masculina: %0.2f	|	Menor altura maculina: %0.2f", maior_altura_homem,menor_altura_homem);
	
}
