#include <unistd.h>
#include <stdio.h>

int main(){
    
    //Mile to Metre
	float dist;
	
	printf("distance in Mile : \n");
	scanf("%f" , &dist);
	
	dist=(dist / 1.609 ) * 1000 ;
	
	printf ("distance in Metre : %f\n", dist);
	
	return 0;
}

