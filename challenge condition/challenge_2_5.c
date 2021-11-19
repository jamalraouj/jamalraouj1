#include <stdio.h>
#include <math.h>
int main(){
	
	float a,b,c,delta;
	
	printf("Pour calculer une équation quadratique :\n");
	printf("Entre a et b et c :\n");
	
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	delta =pow(b,2)-(4*a*c);
	 
	printf("delta = %0.2f \n",delta);
	if(delta <0){
		printf(" pas de selution %0.2f",delta);
	}
	else if(delta == 0){
		
		
		printf("delta = %0.2f", (-b)/(2*a));
	}
	else if(delta >0){
		
		printf("Première solution delta = %0.2f" ,(-b - sqrt(delta))/(2*a));
	
	
		printf("deuxième solution delta = %0.2f" ,(-b + sqrt(delta))/(2*a));
		
	}
	
	
	
	
	return 0;
}
