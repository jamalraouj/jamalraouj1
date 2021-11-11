#include<stdio.h>

int main(){
	
	float rayon;
	const float pi = 3.14;

	printf("Entre rayon de circle :");
	scanf("%f",&rayon);
	float circum = 2*pi*rayon; //circumference
	printf("%0.1f",circum);
	
}
