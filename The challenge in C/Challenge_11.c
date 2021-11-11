#include<stdio.h>

int main(){
	
	float longueur , largeur , result;
	
	printf("Entre la longueur de rectangle :\n");
	scanf("%f",&longueur);
	
	printf("Entre la largeur de rectangle :\n");
	scanf("%f",&largeur);
	result = 2*(longueur +largeur);
	printf("result :%f",result);
	
}
