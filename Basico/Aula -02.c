#include<stdio.h>

// armazenar os dados
int n1,n2,n3,n4;
float media;


int main(){
	// %i -> inteiro
	// %f -> float
	// %c - char
	// & endereço da memória
	printf("DIGITE A NOTA 1: ");
	scanf("%i", &n1);
	
	printf("DIGITE A NOTA 2: ");
	scanf("%i", &n2);
	
	printf("DIGITE A NOTA 3: ");
	scanf("%i", &n3);
	
	printf("DIGITE A NOTA 4: ");
	scanf("%i", &n4);
	
	printf("o RESULTADO É: ");
	media = (n1+n2+n3+n4)/4;
	
	printf("%f", media);
	
	printf("\n\nO aluno foi:");
	
	// if(media >= 65) {
	//			printf("aluno aprovado");
	//		} else {
	//			printf("aluno reprovado");
	//      }
		
	if(media >= 65)
		printf(" Aluno Aprovado");
	
	if(media < 65)
		printf(" Aluno Reprovado");
		
}
	
