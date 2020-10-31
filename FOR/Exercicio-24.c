//Faça um algoritmo para o “jogo de adivinhar um número”, mas invertendo
//os papéis desta vez. O computador que vai tentar adivinhar um número
//escolhido pelo usuário. O usuário deve escolher um número e para cada
//número apresentado pelo computador, responder se ele acertou, ou se o
//número apresentado é maior que o escolhido, ou se ele é menor que o
//escolhido. O algoritmo termina quando o usuário responder que o
//computador acertou.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	int numero, i, x;
	
	printf("Escolha um n%cmero para ser sorteado 1 a 100: ", 163);
	scanf("%i", &numero);
	
	for(i=1; i<=10; i++){
	x=rand() % 100;

	  
	printf("\n\nO n%cmero %c: %i", 163, 130, x);
	 
	 if( x == numero){
    	printf("\nVoc%c acertou!", 136);
    	printf("\nNA TENTATIVA: %i", i);
    	system("color 02");
    	break;
	}else if(x > numero){
		printf("\nO n%cmero sorteado %c menor!", 163, 130);
		system("color 04");
		
		
	}else{
		printf("\nO n%cmero sorteado %c maior!", 163, 130);
	
		system("color 04");
		
	}
   
  }
}



	
