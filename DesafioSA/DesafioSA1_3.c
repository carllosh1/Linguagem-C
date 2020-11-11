#include <stdio.h>
#include <math.h>


float a, b, c, d=0, x1=0, x2=0;


int main(){
	
	
	printf("ax%c + bx + c = 0", 253);
	
	printf("\nEntre com o valor de a:");
	scanf("%f", &a);

	
	
	printf("\nEntre com o valor de b:");
	scanf("%f", &b);
	
	
	printf("\nEntre com o valor de c:");
	scanf("%f", &c);
	
	
	
	
	d= (pow(b,2)) - (4*a*c);
	
	if(d < 0){
		printf("\nNao existe raiz real ");
		
	}else{
		x1 = ((-b - sqrt(d))/(2*a));
		x2 = ((-b + sqrt(d))/(2*a));
		
		printf("\no valor de x': %0.2f x'': %0.2f", x1, x2);
	}
	
	
	
}
