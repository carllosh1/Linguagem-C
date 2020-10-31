#include <stdio.h>

int n1,n2,n3;

int main(){
	printf("Entre com o primeiro numero: ");
	scanf("%i", &n1);
	printf("Entre com o Segundo numero: ");
	scanf("%i", &n2);
	printf("Entre com o terceiro numero: ");
	scanf("%i", &n3);
	
	
	if(n1<n2 && n1<n3 && n2>n3){
		printf("%i, %i, %i", n1,n3,n2);
		
	}else if(n1<n2 && n1<n3 && n3>n2){
		printf("%i, %i, %i", n1,n2,n3);
		
	}else if(n2<n3 && n2<n1 && n1>n3){
		printf("%i, %i, %i", n2,n3,n1);
	
	}else if(n2<n3 && n2<n1 && n3>n1){
		printf("%i, %i, %i", n2,n1,n3);
	
	}else if(n3<n1 && n3<n2 && n1>n2){
	printf("%i, %i, %i", n3,n2,n1);
	
	}else if(n3<n2 && n3<n1 && n2 >n1){
	
	printf("%i, %i, %i", n3,n1,n2);
	}
	
	
}
