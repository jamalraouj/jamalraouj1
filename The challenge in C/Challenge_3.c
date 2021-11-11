#include <unistd.h>
#include <stdio.h>

int main(){
    // Meter to Mile
	float dist;
	
	printf("distance in Meter : \n");
	scanf("%f" , &dist);
	
	dist=(dist / 1000 ) *  1.609 ;
	
	printf ("distance in Mile : %f\n", dist);
	
	return 0;
}

