#include <unistd.h>
#include <stdio.h>

int main(){
    
    //Entre F To C 
	// if C < 0  print .....
    float temp;

    printf("Temperature in F : \n");
    scanf("%f", &temp);

    temp = (temp - 32) * 5/9;

    printf("Temperature in C : %f\n", temp);
    if (temp < 0){
    	 printf("Very cold temperature\n");//
    		} 
    		
	else if(temp <= 30){

        printf("Cold temperature\n");

		}
		
       
    else if (temp > 30){

          if(temp < 40){
          	  printf("Hot temperature\n");
		  }
     else if(temp >40){
    	 printf("Very hot temperature\n");
	}
  
	}
       

    return 0;
}

