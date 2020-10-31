//Faça um algoritmo para o “jogo de adivinhar um número”. O computador
//deve sortear um número entre 0 e 100 e pedir para o usuário tentar
//adivinhar este número. O usuário vai dizer o seu palpite, e o computador
//deve responder, se ele é maior ou menor que o número que ele sorteou. O
//algoritmo termina somente quando o usuário acertar exatamente qual o
//número que o computador tinha sorteado, escrevendo uma mensagem de
//felicitações para o nosso usuário e indicando o número total de tentativas
//feitas. Dica: para gerar um número qualquer entre 0 e 100, use a função
//RandI( limite) - Retorna um número inteiro gerado aleatoriamente, maior ou
//igual a zero e menor que limite

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL)); // PARA GERAR NUMEROS DIFERENTES
  	int i=0, numero,x = rand() % 100; // x = aleatorio
  
  printf("TENTE ADVINHAR O N%cMERO SORTEADO", 233);
  
  while(x != numero){
  	i++;
  	system("color 07");
  	printf("\n\nEntre com um valor entre 1 a 100:");
  	scanf("%i", &numero);
  	 
    if(x == numero){
    	
    	printf("\nVoc%c acertou!", 136);
    	printf("\nNA TENTATIVA: %i", i);
    	system("color 02");
    	break;
	}else if(x < numero){
		printf("O n%cmero sorteado %c menor!", 163, 130);
		system("color 04");
	}else{
		printf("O n%cmero sorteado %c maior!", 163, 130);
		system("color 04");
	}
   
  }
   printf("\n\nN%cMERO SORTEADO: %d ", 233, x);
  getch();

}
