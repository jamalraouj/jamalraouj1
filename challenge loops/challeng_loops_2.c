int main(){
	
	int rows , line , q ,m;
	
	scanf("%d",&rows);
	for(line =1 ; line <= rows ;line++){
		
		for(q = 1; q <= (rows-line) ;q++){
			
			printf(" ");
			
		}
		for(m = 1 ; m<= (line * 2 )-1 ;m++){
			
			printf("*");
		}
		
		
			printf("\n");
	}

	
	
	return 0;
}

