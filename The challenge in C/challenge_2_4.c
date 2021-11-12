int main(){
	
	int nom1,nom2;
	printf("Entre deux nombres :\n");
	scanf("%d",&nom1);
	scanf("%d",&nom2);
	if(nom1 == nom2){
		int result = (nom1 + nom2)*3;
		printf("les deux identique %d",result);
	}
	else printf("la somme de deux nombre et : %d",nom1 + nom2);
	
	
	
	
	return 0;
}
