#include <stdio.h>
int main(){
	
	float years;
	int nom;
	
	printf("entre le nombre du l'anneés : ");
	scanf("%f",&years);
	printf("Choisissez l'un des numéros : ");
	printf("Mois : 1 | jour : 2 | hours : 3 | minuts : 4 | seconds : 5 | ");
	scanf("%d",&nom);
	
	float years_mounths = years * 12;
	float years_jours = years *365;
	float years_hours = years_jours *24 ;
	float years_minutes = years_hours * 60;
	float years_secounds = years_minutes *60;
	
	switch(nom){
		case 1:
			printf("%f", years_mounths);
			break;
			
		case 2:
			printf("%f", years_jours);
			break;
		case 3:
			printf("%f", years_hours);
			break;
		case 4:
			printf("%f", years_minutes);
			break;	
		case 5:
			printf("%0.1f", years_secounds);
			break;			
	}
	
	return 0;
}
