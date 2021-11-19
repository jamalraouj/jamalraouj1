int main(){
	
	int i,x;
	scanf("%d",&x);
	int d = 0;
	for(i = 1; i<=x ; i++ ){
		if(x % i == 0){
			d++;
		}
	}
	if(d == 2) printf("this number is prime :");
	else printf("this number is not prime :");


	return 0;
}
