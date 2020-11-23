// MAIN  CARLOS HENRIQUE OLIVEIRA SANTOS TII2001M

#include "Etapa3_1_Funcoes.c"
#include <stdio.h>
#include <stdlib.h>


int main(){
	int opcao, i=0, w=0, k=0;
	do{
		MenuPrincipal();
		cor(15);
		gotoxy(18,21);scanf("%d", &opcao);
		cor(10);
		system("cls");
		
		
		
		switch(opcao){
			
			case 1: 
			
				CadastroVOO(i);
				i++; 
				break;
			
			case 2: 
				if(i>0){
					CadastroCliente(i,k); 
				k++; 
				}else{
					menuConsulta4(i,k);
					gotoxy(1,1);system("pause");
					break;
				}
				
				break;
			case 3:
				
				
			 	impressao(i,k); 
			
			 	break;
			case 4: 
				break;// sair
			
		
		}
	 	system("cls");
	}while(opcao !=4);
	
}
