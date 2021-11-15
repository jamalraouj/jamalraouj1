int main(){
	
	char i ;
	printf("Entre a caracter : ");
	scanf("%c",&i);
	if(i <=90 && i >=65){
		
		printf(" this caracter is capital |: ");
	}
	else if(i >= 97 && i <= 122 ){
		
		printf(" this caracter is lowercase letter ");
	}
	else{
			printf(" you must to entre a valid caracter : %d",&i);
	}
	
	return 0;
}
