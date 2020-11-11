/*Criar um algoritmo para uma empresa de pesquisa, 
onde serão lidos os seguintes dados: 
Nome entrevistado, sexo, idade, canal de tv preferido, canal de tv malquisto. scanf

Serão 20 entrevistados  que devem ter todos os dados armazenados. for + vetor

Ao final imprimir a média de idade das pessoas do canal mais votado como preferido,  mediaIdadeP
a média de idade das pessoas do canal mais votado como malquisto, mediaIdadeM
o número de pessoas de cada sexo de cada canal de tv.   

Imprimir também todos os dados lidos em forma de tabela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idade[20], i, canalPA=0, canalPB=0, somaIdadePA =0, somaIdadePB=0, j, AsexoPF=0, AsexoPM=0, BsexoPM=0, BsexoPF=0;
char nome[99999][20], canalPreferido[20][20], canalMalquisito[20][20], sexo[20][20];

int main(){
	

	 for(i=0; i<2; i++){
	 	fflush(stdin);
	 	printf("Nome(xxx xxx): ");
	 	scanf("%[^\n]s", &nome[i]);
	 	
	 	fflush(stdin);
		printf("Idade: ");
		scanf("%i", &idade[i]);
		
		fflush(stdin);
		do{
			printf("Sexo(M OU F):");
			scanf("%s", &sexo[i][0]);
		}while((sexo[i][0]!= 'M')&&(sexo[1][0]!='F'));
		
		
		do{
			printf("\nCANAL A: NACIONAIS\nCANAL B: INTERNACIONAIS\n");
			printf("Canal Preferido(A ou B): ");
			scanf("%s", &canalPreferido[i][0]);
		
		fflush(stdin);
		
		}while((canalPreferido[i][0]!= 'A') && (canalPreferido[i][0]!= 'B'));
		
		do{
			printf("Canal Malquisito(A ou B): ");
			scanf("%s", &canalMalquisito[i][0]);
		}while((canalMalquisito[i][0]!= 'A') && (canalMalquisito[i][0]!= 'B'));
		
			
		system("pause");
		system("cls");
		
		if(canalPreferido[i][0] == 'A'){
	 		somaIdadePA+= idade[i];
	 		canalPA++;
	 		if(sexo[i][0]=='M'){
	 			AsexoPM++;
			 }else{
			 	AsexoPF++;
			 }
		 }else{
		 	somaIdadePB+= idade[i];
		 	canalPB++;
		 	
		 	if(sexo[i][0]=='M'){
	 			BsexoPM++;
			 }else{
			 	BsexoPF++;
			 }
		 	
		 }
	
	}
	printf("Dados");
	printf("\n\n");
	 
	for(i=0; i<2; i++){
	
		printf("Nome: %s\t\t", nome[i]);
	 	printf("Idade: %i\t", idade[i]);
	 	printf("Sexo: %s\t\t", sexo[i]);
	 	printf("CANAL Preferido: %s\t", canalPreferido[i]);
	 	printf("CANAL Malquisito: %s\n", canalMalquisito[i]);
	
	 }
	 
	 printf("\n\n");
	
	if(canalPA>canalPB){
		printf("Canal Mais votado como Preferido: A  | Media das idades dos que votaram:  %i |Homens: %i | Mulheres: %i\n", somaIdadePA/canalPA, AsexoPM, AsexoPF);
		
	 	printf("Canal Mais votado como Malquisito: B | Media das idades dos que votaram:  %i |Homens: %i | Mulheres: %i\n",  somaIdadePB/canalPB, BsexoPM, BsexoPF);
		
	 }else{
	 	printf("Canal Mais votado como Preferido: A  | Media das idades dos que votaram:  %i |Homens: %i | Mulheres: %i\n", somaIdadePB/canalPB, BsexoPM, BsexoPF);
	 	
	 	printf("Canal Mais votado como Malquisito: B | Media das idades dos que votaram:  %i |Homens: %i | Mulheres: %i\n",  somaIdadePA/canalPA, AsexoPM, AsexoPF);	
	}
	
}


