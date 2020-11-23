// MAIN CARLOS HENRIQUE OLIVEIRA SANTOS TII2001M

// FUNÇÕES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BibliotecaViana.c"

//dados
	int qtdPiloto;
	int capacidade[999], capacidadeTroca[999];
	char prefixo[99][99];
	float autonomia[99];
	
	int numeroVoo[99];
	char destino[99][99];
	
	int registro[99][3];
	char nomePiloto[99][99][99][3];
	int horas[99][3];
	
	
	char cpfSalvar[12][99];
	char nomeCliente[99][99][99][99];
	
	int numeroCliente[99][99];
	
	int numero;
	int g=0;


void dadosAeronave(int i){

	fflush(stdin);
	cor(15);
	gotoxy(9,2);printf("Prefixo da Aeronave:");
	gotoxy(9,23);scanf("%[^\n]s", &prefixo[i]);
	gotoxy(10,2);printf("Capacidade da Aeronave:");
	gotoxy(10,26);scanf("%i", &capacidade[i]);
	gotoxy(11,2);printf("Autonomia da Aeronave(Km):");
	gotoxy(11,29);scanf("%f", &autonomia[i]);
	
	cor(10);
	capacidadeTroca[i]=capacidade[i];
		
	
}


void dadosPiloto(int i){
	int  j=0,k, q=0;
	
	cor(15);
	gotoxy(14,2);printf("Quantidade de pilotos(Limite: 3):");
	gotoxy(14,36);scanf("%i", &qtdPiloto);
	cor(10);
//	TipoPiloto piloto[999][3];
	
	for(j=0; j<qtdPiloto; j++){
		q=j*5;
		gotoxy(16+q,6); printf("%c", 218);
		gotoxy(17+q,6); printf("%c", 179);
		gotoxy(18+q,6); printf("%c", 179);
		gotoxy(19+q,6); printf("%c", 179);
		gotoxy(20+q,6); printf("%c", 192);
		
		for(k=7; k<46; k++){
			gotoxy(16+q,k);printf("%c", 196);
			gotoxy(20+q,k);printf("%c", 196);
		}
		gotoxy(16+q,46); printf("%c", 191);
		gotoxy(17+q,46); printf("%c", 179);
		gotoxy(18+q,46); printf("%c", 179);
		gotoxy(19+q,46); printf("%c", 179);
		gotoxy(20+q,46); printf("%c", 217);
		
		cor(160);
		gotoxy(16+q,11);printf("%i-Piloto",j+1);
		fflush(stdin);
		cor(15);
		gotoxy(17+q,8);printf("Nome: ");
		gotoxy(17+q,14);scanf("%[^\n]s", &nomePiloto[i][j]);
		
		gotoxy(18+q,8);printf("Registro: ");
		gotoxy(18+q,18);scanf("%i", &registro[i][j]);
		
		gotoxy(19+q,8);printf("Horas de v%co: ",147);
		gotoxy(19+q,22);scanf("%i", &horas[i][j]);	
		
		
		gotoxy(19+q,25);printf("Horas");
		cor(10);
	}
	
	
}


void dadosVoo(int i){
	
//	TipoVOO voo[99];
	cor(15);
	gotoxy(5,2);printf("Informe o N%cmero do Voo: ",163);
	
	gotoxy(5,27);scanf("%i", &numeroVoo[i]);
	fflush(stdin);
	gotoxy(6,2);printf("Informe o Destino: ",224);
	gotoxy(6,21);scanf("%[^\n]s", &destino[i]);
	
	cor(2);
	
}
 


//-----------------------------------------------------//

void validar_cpf(int q, int w, int z){
	int ICPF[12], soma=0, resultado1, digito1, digito2, resultado2, valor=0, i,x=0;

 	char cpf[12];
 	x= w+z;
	do{
		soma=0;
		
		
		gotoxy(6+q,2);printf("CPF:");
		
		gotoxy(6+q,6);scanf("%s", &cpf);
		
		strcpy(cpfSalvar[x], cpf);
		
		for(i=0; i<11; i++){
			ICPF[i]= cpf[i]-48;
		}
		for(i=0; i<9; i++){
			soma+=ICPF[i]*(10-i);
		}
		resultado1=soma%11;
		if((resultado1==0) || (resultado1==1)){
			digito1=0;
		}else{
			digito1= 11-resultado1;	
		}
	
		soma=0;
		
		for(i=0; i<10; i++){
			soma += ICPF[i]*(11-i);
		}
		
		valor= (soma/11)*11;
		resultado2= soma-valor;
		
		if((resultado2==0) || (resultado1==1)){
			digito2=0;
		}else{
			digito2=11-resultado2;
		}
		
		if((digito1==ICPF[9]) && (digito2==ICPF[10])){
			gotoxy(7+q,2);printf("                                  ");
			gotoxy(7+q,2);printf("CPF VALIDO");
			
		}else{
			gotoxy(7+q,2);printf("CPF INVALIDO");
			gotoxy(6+q,6);printf("                                           ");
			
		}
		
		
		
	}while((digito1!=ICPF[9]) && (digito2!=ICPF[10]));
	
	
}


// ------------------MENU--------------------------//
void MenuPrincipal(){
		
	int i, j;
		  
		cor(10);
		
		gotoxy(1,1); printf("%c", 218);
		gotoxy(2,1); printf("%c", 179);
		gotoxy(3,1); printf("%c", 195);
		
		for(j=2;j<70; j++){
				gotoxy(1,j);printf("%c", 196);
				gotoxy(3,j);printf("%c", 196);
		}	
		
		gotoxy(1,70); printf("%c", 191);
		gotoxy(2,70); printf("%c", 179);
		gotoxy(3,70); printf("%c", 180);
			
	
		gotoxy(3,34); printf("%c", 194);
	
		cor(14);
		gotoxy(2,33);printf("MENU");
		cor(10);
		
		
	
		printf("\n\n");
		
		
		gotoxy(4,1); printf("%c", 195);
		gotoxy(5,1); printf("%c", 179);
		gotoxy(6,1); printf("%c", 195);
		
		for(j=2;j<70; j++){
				gotoxy(4,j);printf("%c", 196);
				gotoxy(6,j);printf("%c", 196);
		}	
			cor(160);
			gotoxy(4,15);printf("C%cDIGO",224);
		gotoxy(4,51);;printf("OPC%cO",199,224);
		cor(10);
		gotoxy(4,70); printf("%c", 180);
		gotoxy(5,70); printf("%c", 179);
		gotoxy(6,70); printf("%c", 180);
		
		gotoxy(4,34);printf("%c",197	);
		gotoxy(5,34);printf("%c",179);
		gotoxy(6,34);printf("%c",197);
		
		cor(15);
		gotoxy(5,17);printf("1");
	
		gotoxy(5,40);printf("Cadastrar Dados da do V%co", 147);
		cor(10);
		
		gotoxy(7,1); printf("%c", 195);
		gotoxy(8,1); printf("%c", 179);
		gotoxy(9,1); printf("%c", 195);
		
		for(j=2;j<70; j++){
				gotoxy(7,j);printf("%c", 196);
				gotoxy(9,j);printf("%c", 196);
		}	
		
		gotoxy(7,70); printf("%c", 180);
		gotoxy(8,70); printf("%c", 179);
		gotoxy(9,70); printf("%c", 180);
		
		gotoxy(7,34);printf("%c",197);
		gotoxy(8,34);printf("%c",179);
		gotoxy(9,34);printf("%c",197);
		
		cor(15);
		gotoxy(8,17);printf("2");
	
		gotoxy(8,41);printf("Cadastrar Dados Cliente", 186);
		cor(10);
		
		gotoxy(10,1); printf("%c", 195);
		gotoxy(11,1); printf("%c", 179);
		gotoxy(12,1); printf("%c", 195);
		
		for(j=2;j<70; j++){
				gotoxy(10,j);printf("%c", 196);
				gotoxy(12,j);printf("%c", 196);
		}	
		
		gotoxy(10,70); printf("%c", 180);
		gotoxy(11,70); printf("%c", 179);
		gotoxy(12,70); printf("%c", 180);
		
		gotoxy(10,34);printf("%c",197);
		gotoxy(11,34);printf("%c",179);
		gotoxy(12,34);printf("%c",197);
		
		cor(15);
		gotoxy(11,17);printf("3");
	
		gotoxy(11,40);printf("Consulta dados da viagem", 186);
		cor(10);
		gotoxy(13,1); printf("%c", 195);
		gotoxy(14,1); printf("%c", 179);
		gotoxy(15,1); printf("%c", 192);
		
	
		
		for(j=2;j<70; j++){
				gotoxy(13,j);printf("%c", 196);
				gotoxy(15,j);printf("%c", 196);
		}	
		
		gotoxy(13,34);printf("%c",197);
		gotoxy(14,34);printf("%c",179);
		gotoxy(15,34);printf("%c",193);
		
		gotoxy(13,70); printf("%c", 180);
		gotoxy(14,70); printf("%c", 179);
		gotoxy(15,70); printf("%c", 217);
		
		cor(12);
		gotoxy(14,17);printf("4");
	
		gotoxy(14,51);printf("SAIR");
		cor(8);
		
		
		gotoxy(17,1); printf("%c", 218);
		gotoxy(18,1); printf("%c", 179);
		gotoxy(19,1); printf("%c", 192);
		
		for(j=2;j<23; j++){
				gotoxy(17,j);printf("%c", 196);
				gotoxy(19,j);printf("%c", 196);
		}	
		gotoxy(17,23); printf("%c", 191);
		gotoxy(18,23); printf("%c", 179);
		gotoxy(19,23); printf("%c", 217);
		
		gotoxy(17,19);printf("%c",194);
		gotoxy(18,19);printf("%c",179);
		gotoxy(19,19);printf("%c",193);
		
		cor(128);
		gotoxy(18,2);printf("Digite o C%cDIGO:", 224);
		cor(10);
		
		
		cor(1);
		gotoxy(1,75);printf("	    _____");
		gotoxy(2,75);printf("           _|_");												
		gotoxy(3,75);printf("__________( * )__________");
		gotoxy(4,75);printf("       /   `-'   / ");
		gotoxy(5,75);printf("      O         O");  
                //_/");
       	gotoxy(5,79); printf("%c", 218);
		gotoxy(6,79); printf("%c", 179);
		gotoxy(7,79); printf("%c", 192);
		
		for(j=80;j<95; j++){
				gotoxy(5,j);printf("%c", 196);
				gotoxy(7,j);printf("%c", 196);
		}	
		
		gotoxy(5,95); printf("%c", 191);
		gotoxy(6,95); printf("%c", 179);
		gotoxy(7,95); printf("%c", 217);    
		cor(128);
		
		gotoxy(6,83);printf("AEROPORTO") ; 
		
		cor(10);
}

void MenuVoo(){
	
	int j, i,q=0;
	gotoxy(1,1); printf("%c", 218);
	gotoxy(2,1); printf("%c", 179);
	gotoxy(3,1); printf("%c", 195);
		
	for(j=2;j<50; j++){
			gotoxy(1,j);printf("%c", 196);
			gotoxy(3,j);printf("%c", 196);
			gotoxy(4,j);printf("%c", 196);
			gotoxy(7,j);printf("%c", 196);
			gotoxy(8,j);printf("%c", 196);
			gotoxy(12,j);printf("%c", 196);
			gotoxy(13,j);printf("%c", 196);
			gotoxy(15,j);printf("%c", 196);
	}	
		
	gotoxy(1,50); printf("%c", 191);
	gotoxy(2,50); printf("%c", 179);
	gotoxy(3,50); printf("%c", 180);
	
	cor(14);
 	gotoxy(2,18);printf("CADASTRO DE VOO");
 	cor(10);
	gotoxy(4,1); printf("%c", 195);
		
	gotoxy(7,1); printf("%c", 195);
	for(i=5; i<7;i++){
			gotoxy(i,1); printf("%c", 179);
			gotoxy(i,50); printf("%c", 179);
	}
	
	cor(160);
	gotoxy(4,23);printf("DADOS");	
	cor(10);
	gotoxy(7,50); printf("%c", 180);
	gotoxy(4,50); printf("%c", 180);
	
	cor(160);
	gotoxy(8,21);printf("AERONAVE");
	cor(10);
	
	for(i=8; i<12;i++){
			
			gotoxy(i,1); printf("%c", 179);
			gotoxy(i,50); printf("%c", 179);
	}
	gotoxy(8,1); printf("%c", 195);
	gotoxy(8,50); printf("%c", 180);
	
	gotoxy(12,1); printf("%c", 195);
	gotoxy(12,50); printf("%c", 180);
	gotoxy(13,1); printf("%c", 195);
	gotoxy(13,50); printf("%c", 180);
	
	gotoxy(14,1); printf("%c", 179);
	gotoxy(14,50); printf("%c", 179);
	
	gotoxy(15,1); printf("%c", 192);
	gotoxy(15,50); printf("%c", 217);
	
	cor(160);
	gotoxy(13,22);printf("PILOTO");
	cor(10);
	
}

void menuConsulta1(){
	
	int j, i,q=0;
	gotoxy(1,1); printf("%c", 218);
	gotoxy(2,1); printf("%c", 179);
	gotoxy(3,1); printf("%c", 195);
		
	for(j=2;j<50; j++){
			gotoxy(1,j);printf("%c", 196);
			gotoxy(3,j);printf("%c", 196);
			gotoxy(5,j);printf("%c", 196);
			
			gotoxy(12,j);printf("%c", 196);
			gotoxy(13,j);printf("%c", 196);
			
	}	
		
	gotoxy(1,50); printf("%c", 191);
	gotoxy(2,50); printf("%c", 179);
	gotoxy(3,50); printf("%c", 180);
	
	
	gotoxy(4,1); printf("%c", 179);
	gotoxy(4,50); printf("%c", 179);
	cor(14);
 	gotoxy(2,17);printf("CONSULTA DE V%cO",226);
 	cor(10);
	gotoxy(5,1); printf("%c", 195);
		
	gotoxy(7,1); printf("%c", 195);
	for(i=6; i<12;i++){
			gotoxy(i,1); printf("%c", 179);
			gotoxy(i,50); printf("%c", 179);
	}
	
	cor(160);
	gotoxy(5,23);printf("DADOS");	
	cor(10);
	gotoxy(12,50); printf("%c", 180);
	gotoxy(5,50); printf("%c", 180);
	gotoxy(12,1); printf("%c", 195);
	
	
	gotoxy(13,1); printf("%c", 192);
	gotoxy(13,50); printf("%c", 217);
	cor(160);
	gotoxy(13,21);printf("CLIENTES");
	cor(10);
	
	
}

void menuConsulta2(int i){
	int j,q=0,k;
	
	
	if(i>0){
		for(k=0; k<i; k++){
		
			q=k*4;
			gotoxy(1+q,60); printf("%c", 218);
			gotoxy(2+q,60); printf("%c", 179);
			gotoxy(3+q,60); printf("%c", 179);
			gotoxy(4+q,60); printf("%c", 192);
			
			for(j=61;j<110; j++){
				gotoxy(1+q,j);printf("%c", 196);
				gotoxy(4+q,j);printf("%c", 196);
				
			}	
			cor(160);
			gotoxy(1+q,77);printf("V%co disponivel",147);
			cor(10);
			gotoxy(1+q,110); printf("%c", 191);
			gotoxy(2+q,110); printf("%c", 179);
			gotoxy(3+q,110); printf("%c", 179);
			gotoxy(4+q,110); printf("%c", 217);
			
			cor(15);
			
			gotoxy(2+q,61);printf("Numero do v%co: %i",147, numeroVoo[k]);
			gotoxy(3+q,61);printf("Destino: %s", destino[k]);
			cor(10);
			
		}
	}
}	

void menuConsulta3(){
	int j, i,q=0,k, z=0;
		for(i=0; i<100; i++){
			for(k=0; k<100; k++){
			
			if(numero==numeroCliente[i][k]){
					q=z*5;
					gotoxy(15+q,1); printf("%c", 218);
					gotoxy(16+q,1); printf("%c", 179);
					gotoxy(17+q,1); printf("%c", 179);
					gotoxy(18+q,1); printf("%c", 192);
						
					for(j=2;j<50; j++){
							gotoxy(15+q,j);printf("%c", 196);
							gotoxy(18+q,j);printf("%c", 196);	
					}	
						
					gotoxy(15+q,50); printf("%c", 191);
					gotoxy(16+q,50); printf("%c", 179);
					gotoxy(17+q,50); printf("%c", 179);
					gotoxy(18+q,50); printf("%c", 217);
				
			
					cor(15);
					gotoxy(16+q,2);printf("Nome Cliente: %s\n",nomeCliente[i][k]); 
					gotoxy(17+q,2);printf("CPF Cliente: %s",cpfSalvar[k+i]); 
					cor(10);	
					z++;
			}else{
				break;
			}
		}
	}
}

void menuConsulta4(int i, int x){
	int j,q=0,k,v=0;
	
		if(i!=0){
			for(k=0; k<i; k++){
				
					q=k*5;
					gotoxy(1+q,60); printf("%c", 218);
					gotoxy(2+q,60); printf("%c", 179);
					gotoxy(3+q,60); printf("%c", 179);
					gotoxy(4+q,60); printf("%c", 179);
					gotoxy(5+q,60); printf("%c", 192);
					
					for(j=61;j<110; j++){
						gotoxy(1+q,j);printf("%c", 196);
						gotoxy(5+q,j);printf("%c", 196);
						
					}	
					cor(160);
					gotoxy(1+q,77);printf("Voo disponivel");
					cor(10);
					
					gotoxy(1+q,110); printf("%c", 191);
					gotoxy(2+q,110); printf("%c", 179);
					gotoxy(3+q,110); printf("%c", 179);
					gotoxy(4+q,110); printf("%c", 179);
					gotoxy(5+q,110); printf("%c", 217);
					
					cor(15);
					gotoxy(2+q,61);printf("Numero do voo: %i", numeroVoo[k]);
					gotoxy(3+q,61);printf("Destino: %s", destino[k]);
					gotoxy(4+q,61);printf("Capacidade: %i", capacidade[k]);
					cor(10);
					
					
			
		
				}
	
			}else{
					gotoxy(1,60); printf("%c", 218);
					gotoxy(2,60); printf("%c", 179);
					gotoxy(3,60); printf("%c", 192);
					
					for(j=61;j<110; j++){
					gotoxy(1,j);printf("%c", 196);
					gotoxy(3,j);printf("%c", 196);
					
					}
					gotoxy(1,110); printf("%c", 191);
					gotoxy(2,110); printf("%c", 179);
					gotoxy(3,110); printf("%c", 217);
				cor(15);
					gotoxy(2,75);printf("Nenhum VOO CADASTRADO");
				cor(10);
					
			}
		
		
		

}
// ----------------------------------------------//

// -----------Cadastro---------------//
void CadastroCliente(int u,int w){
//	TipoCliente cliente[99][99];
	int x;
	int z=0, j, i, q=0,v=0, c=0;
	x=g+w;
	char sair[999];
	
	
	
	
	
	menuConsulta4(u,x);
	
	cor(15);
	if(u!=0){
		for(i=0;i<u;i++){
			c=i*5;
			if(capacidadeTroca[i]>0){
				
						gotoxy(4+c,80);printf("Vagas Restantes: %i", capacidadeTroca[i]);
						
						
					}else{
						gotoxy(4+c,80);printf("N%cO TEM MAIS VAGAS", 199);
					}
		}
		
	}
	cor(10);
	
	do{
		gotoxy(1+q,1); printf("%c", 218);
		gotoxy(2+q,1); printf("%c", 179);
		gotoxy(3+q,1); printf("%c", 195);
			
		for(j=2;j<50; j++){
				gotoxy(1+q,j);printf("%c", 196);
				gotoxy(3+q,j);printf("%c", 196);
				gotoxy(4+q,j);printf("%c", 196);
				gotoxy(8+q,j);printf("%c", 196);
				gotoxy(9+q,j);printf("%c", 196);
				gotoxy(11+q,j);printf("%c", 196);
				gotoxy(13+q,j);printf("%c", 196);
				gotoxy(16+q,j);printf("%c", 196);
		}	
			
		gotoxy(1+q,50); printf("%c", 191);
		gotoxy(2+q,50); printf("%c", 179);
		gotoxy(3+q,50); printf("%c", 180);
		
		cor(14);
	 	gotoxy(2+q,15);printf("CADASTRO DE CLIENTE");
	 	cor(10);
	 	
		gotoxy(4+q,1); printf("%c", 195);
		gotoxy(8+q,1); printf("%c", 195);
		for(i=5; i<8;i++){
				gotoxy(i+q,1); printf("%c", 179);
				gotoxy(i+q,50); printf("%c", 179);
		}
		
		cor(160);	
		gotoxy(4+q,23);printf("DADOS");	
		cor(10);
		gotoxy(8+q,50); printf("%c", 180);
		gotoxy(4+q,50); printf("%c", 180);
		
		gotoxy(9+q,1); printf("%c", 195);
		gotoxy(9+q,50); printf("%c", 180);
		
		cor(160);	
		gotoxy(9+q,24);printf("V%cO",226);
		cor(10);
		gotoxy(10+q,1); printf("%c", 179);
		gotoxy(10+q,50); printf("%c", 179);
		
	
		gotoxy(12+q,1); printf("%c", 179);
		gotoxy(12+q,50); printf("%c", 179);
		gotoxy(11+q,1); printf("%c", 195);
		gotoxy(11+q,50); printf("%c", 180);
		gotoxy(13+q,1); printf("%c", 195);
		gotoxy(13+q,50); printf("%c", 180);
		
		
		
		
		for(i=14; i<16;i++){
				gotoxy(i+q,1); printf("%c", 179);
				gotoxy(i+q,50); printf("%c", 179);
		}
		
		gotoxy(16+q,1); printf("%c", 192);
		gotoxy(16+q,50); printf("%c", 217);
	
		
		fflush(stdin);
		
		cor(15);
		gotoxy(5+q,2);printf("Nome: ");
		gotoxy(5+q,7);scanf("%[^\n]s", &nomeCliente[w][z]);
		
	
		validar_cpf(q,w,z);
	
		gotoxy(10+q,2);printf("Para qual v%co deseja cadastrar? ",147);
		gotoxy(10+q,34);scanf("%i", &numeroCliente[w][z]);
		gotoxy(12+q,17);printf("Cadastro Concluido");
		
		for(i=0; i<u; i++){
			if(numeroCliente[w][z]==numeroVoo[i]){
				capacidadeTroca[i]= capacidadeTroca[i]-1;
					c=i*5;
					if(capacidadeTroca[i]>0){
						gotoxy(4+c,80);printf("Vagas Restantes: %i", capacidadeTroca[i]);
						
					}else{
						gotoxy(4+c,80);printf("N%cO TEM MAIS VAGAS",199);
					}
		}
		}
		
					
		do{
			gotoxy(14+q,7);printf("Voc%c deseja cadastrar mais clientes?",136);
			gotoxy(14+q,44);printf("\t");
			gotoxy(15+q,7);printf("Digite (Sim)");
			gotoxy(15+q,24);printf("ou");
			gotoxy(15+q,32);printf("Digite(Nao)");
			gotoxy(14+q,44);scanf("%s", &sair);
	cor(10);
		}while((strcmp(sair, "Sim")!=0)&&(strcmp(sair, "Nao")!=0));
		
 	
		
		z++;
		q= z*17;
		
		
		
	}while(strcmp(sair, "Nao")!=0);
	
	g=z;
}

void CadastroVOO(int i){
	MenuVoo();
	dadosVoo(i);
	dadosAeronave(i);
	dadosPiloto(i);
}

void impressao(int i, int z){
	
	int  w,j,x=0, k;
	
	menuConsulta1();
	menuConsulta2(i);
	cor(15);
	gotoxy(4,2);printf("Digite o Numero do v%co: ",147);
	gotoxy(4,26);scanf("%i", &numero);
	cor(10);
	
// O problema eh q o w ta passando só uma vez	
	
	for(w=0; w<99; w++){
		if(numero==numeroVoo[w]){
			
			cor(15);
				gotoxy(6,2);printf("Destino: %s ",destino[w]);
				gotoxy(7,2);printf("Prefixo da Aeronave: %s", prefixo[w] );
			
				for(j=0; j<qtdPiloto; j++){
				gotoxy(8+j,2);printf("Registro do %i piloto: %i",j+1, registro[w][j]);
				}
		
			for(j=0; j<99; j++){
				if(numero==numeroCliente[w][j]){
					gotoxy(14,1);system("pause");
				}
			}
			
			break;
		}
		
	
	
	}
		cor(10);
		menuConsulta3();
		gotoxy(14,1);system("pause");
	
}	

//int main(){
//
//	
//
//}


