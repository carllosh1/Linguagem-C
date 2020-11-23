// MAIN CARLOS HENRIQUE OLIVEIRA SANTOS TII2001M

/*Criar um algoritmo para uma empresa de pesquisa, 
onde serão lidos os seguintes dados: 
Nome entrevistado, sexo, idade, canal de tv preferido, canal de tv malquisto. 

Serão 20 entrevistados  que devem ter todos os dados armazenados. 

Ao final imprimir a média de idade das pessoas do canal mais votado como preferido,
a média de idade das pessoas do canal mais votado como malquisto, 
o número de pessoas de cada sexo de cada canal de tv.   

Imprimir também todos os dados lidos em forma de tabela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BibliotecaViana.c"

int idade[20], i, canalPA=0, canalPB=0, somaIdadePA =0, somaIdadePB=0, j, AsexoPF=0, AsexoPM=0, BsexoPM=0, BsexoPF=0, p=0;
char nome[99999][20], canalPreferido[20][20], canalMalquisito[20][20], sexo[20][20];
float mediaPA=0.0, mediaPB=0.0;

int main(){
	
    for(i=0; i<20; i++){
	 	fflush(stdin);
	 	printf("Nome(ex: Carlos Henrique): ");
	 	scanf("%[^\n]s", &nome[i]);
	 	
	 	fflush(stdin);
		printf("Idade: ");
		scanf("%i", &idade[i]);
		
		fflush(stdin);
		do{
			printf("Sexo(M OU F):");
			scanf("%s", &sexo[i][0]);
		}while((strcmp(sexo[i],"M")!=0)&&(strcmp(sexo[i],"F")!=0));
		
		
		do{
			printf("\nCANAL A: Nacionais\nCANAL B: Internacionais\n");
			printf("Canal Preferido(A ou B): ");
			scanf("%s", &canalPreferido[i]);
		
		fflush(stdin);
		
		}while((strcmp(canalPreferido[i],"A")!=0) && (strcmp(canalPreferido[i],"B")!=0));
		
		do{
			printf("Canal Malquisito(A ou B): ");
			scanf("%s", &canalMalquisito[i]);
		}while((strcmp(canalMalquisito[i],"A")!=0) && (strcmp(canalMalquisito[i],"B")!=0));
		
			
		system("pause");
		system("cls");
		
		if(strcmp(canalPreferido[i],"A")==0){
	 		somaIdadePA+= idade[i];
	 		canalPA++;
	 		if(strcmp(sexo[i],"M")==0){
	 			AsexoPM++;
			 }else{
			 	AsexoPF++;
			 }
		 }else{
		 	somaIdadePB+= idade[i];
		 	canalPB++;
		 	
		 	if(strcmp(sexo[i],"M")==0){
	 			BsexoPM++;
			 }else{
			 	BsexoPF++;
			 }
		 	
		 }
	
	}
	
	
	gotoxy(1,57);printf("Dados");
	gotoxy(1,63);printf("%c",186);
	gotoxy(1,55);printf("%c", 186);
	
	for(j=1;j<121; j++){
		gotoxy(2,j);printf("%c", 205);
	}
		gotoxy(2,55);printf("%c",202);
		gotoxy(2,63);printf("%c",202);
	
	
	
	
	for(i=0; i<20; i++){
		
		gotoxy(4+p,1); printf("%c", 201);
		gotoxy(5+p,1); printf("%c", 186);
		gotoxy(6+p,1); printf("%c", 200);
		
		
		
		
		for(j=2;j<120; j++){
			gotoxy(4+p,j);printf("%c", 205);
			gotoxy(6+p,j);printf("%c", 205);
		}	
		
		gotoxy(5+p,2);printf("Nome: %s", nome[i]);
		gotoxy(5+p,34);printf("%c", 186);
		gotoxy(5+p,36);printf("Idade: %i", idade[i]);
	 	gotoxy(5+p,50);printf("%c", 186);
	 	gotoxy(5+p,52);printf("Sexo: %s", sexo[i]);
	 	gotoxy(5+p,65);printf("%c", 186);
	 	gotoxy(5+p,67);printf("CANAL Preferido: %s", canalPreferido[i]);
	 	gotoxy(5+p,95);printf("%c", 186);
	 	gotoxy(5+p,97);printf("CANAL Malquisito: %s", canalMalquisito[i]);
	 	
	 	gotoxy(4+p,34);printf("%c",203);
		gotoxy(6+p,34);printf("%c",202);
		
		gotoxy(4+p,50);printf("%c",203);
		gotoxy(6+p,50);printf("%c",202);
		
		gotoxy(4+p,65);printf("%c",203);
		gotoxy(6+p,65);printf("%c",202);
		
		gotoxy(4+p,95);printf("%c",203);
		gotoxy(6+p,95);printf("%c",202);
		
		gotoxy(4+p,120); printf("%c", 187);
		gotoxy(5+p,120); printf("%c", 186);
		gotoxy(6+p,120); printf("%c", 188);
		
	 	p+=3;
	
	}
	
	
	mediaPA=somaIdadePA/canalPA;
	mediaPB=somaIdadePB/canalPB;
	 
	printf("\n\n\n\n");
	
	if(canalPA>canalPB){
		printf("Canal Mais votado como Preferido: A  | Media das idades dos que votaram:  %.2f |Homens: %i | Mulheres: %i\n", mediaPA, AsexoPM, AsexoPF);
		
	 	printf("Canal Mais votado como Malquisito: B | Media das idades dos que votaram:  %.2f |Homens: %i | Mulheres: %i\n",  mediaPB, BsexoPM, BsexoPF);
		
	 }else{
	 	printf("Canal Mais votado como Preferido: A  | Media das idades dos que votaram:  %.2f |Homens: %i | Mulheres: %i\n", mediaPB, BsexoPM, BsexoPF);
	 	
	 	printf("Canal Mais votado como Malquisito: B | Media das idades dos que votaram:  %.2f |Homens: %i | Mulheres: %i\n",  mediaPA, AsexoPM, AsexoPF);	
	}
	
}


