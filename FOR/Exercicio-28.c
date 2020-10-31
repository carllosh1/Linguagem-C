//Fazer um algoritmo que calcule e exiba na tela o fatorial de um número fornecido
//pelo usuário, usando o comando “repita”. Perguntar ao usuário se ele deseja
//calcular o fatorial de outro número e repetir a execução do algoritmo tantas vezes
//quantas o usuário indicar.
#include <stdio.h>

int i,n, fat;
char simnao;
int main(){
	printf("FATORIAL\n");
	for(i=1; i<=100000; i++){
	
		printf("\nEntre com um valor: ");
		scanf("%i", &n);
		
	
		if(n == 0){
			fat=1;
			printf("FATORIAL: %d", fat);
		}else 
		if(n < 0){
			printf("\nNÃO EXISTE FATORIAL DE NUMERO NEGATIVO");
		}else 
		if(n>16){
			printf("\nNUMERO MUITO GRANDE PARA SER CALCULADO");
		}else{
		
			for(fat=1;n>1; n--){
				fat = fat* n;
			}
			
			printf("FATORIAL: %d", fat);
		printf("\nVoce deseja calcular outro fatorial?");
		do{
		printf("\n|Y| - Sim | |N| - Nao:\n|");
		scanf("%s", &simnao);
		}while((simnao != 'Y')and (simnao != 'N'));
		
			if(simnao == 'N'){
				break;
			}else{}	
		
		}
	
	
	

}
}


