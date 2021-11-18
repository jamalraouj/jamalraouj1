
int fun(int a,int b){
	
	
   int s;
   s = a;
   a = b;
   b = s;
   
   printf("%d ,%d",a,b);
   return 0;
}


int main(){

    int x,y;
	printf("entre : ");
	scanf("%d",&x);
	scanf("%d",&y);
	fun(x,y);
	
	
		
	
	return 0;
}
