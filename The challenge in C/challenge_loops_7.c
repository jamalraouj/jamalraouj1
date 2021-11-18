#include <stdio.h>
#include <stdbool.h>

	bool isPremier(int x){//this function returns if the number is prime or not
		int a=0;
		int i;
		bool bool_1 ;
		for( i = 1 ; i<=x ;i++){
			
		if(x % i == 0){
			a++;	
		}
		
		}	
		
          if(a == 2 ){
			bool_1 = true;
			
		}
		else {
		bool_1 = false;
		
		}
		if(bool_1 == 1){
			printf("this number is true");
		}
		else
		 printf("this number is false");
		
	}

int main()

{
	int y;
	printf("Entre number :");
	scanf("%d",&y);

	isPremier(y);
	return 0;
}

 
