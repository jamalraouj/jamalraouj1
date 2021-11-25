#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct info_client{
	char name[20];
	char l_name[20];
	char CIN[10];
    float montant;
	
} client  ;


client All_comptes[] = { // all comptes

 	 {"ahmad    ","essary   ","EE1100",10000},
     {"jalil    ","sabiry   ","EE1101",1000},  
     {"ahmad    ","essary   ","EE1100",10000},
     {"jalil    ","sabiry   ","EE1101",1000},  
     {"chaimae  ","benmoussa","EE1102",1830},
 	 {"zakaria  ","nadifi   ","EE1103",1630},
 	 {"mohammed ","souiry   ","EE1104",103810},
 	 {"abdelaziz","mqaoui   ","AA6378",105200},
 	 {"abdejalil","nadir    ","AA5643",10000},
 	 {"nourdin  ","menjem   ","AC5405",10000},
 	 {"yassine  ","idar     ","AC4322",10090},
 	 {"youssef  ","nakib    ","CC5435",10600},
 	 {"abdelilah","abir     ","CC6354",15400},
 	 {"samir    ","makir    ","EE1105",10000},
 	 {"mohammed ","maqedem  ","EE1105",10800},
 	 {"amine    ","lasri    ","EE1105",10000},
 	 {"imad     ","jaber    ","EE1805",10000},
 	 {"youness  ","moutawkil","EE1185",10000},
 	 {"adnan    ","chtwani  ","EE1105",10000},
 	 {"ayoub    ","bzizy    ","EE1105",10000},
 	 {"sabir    ","maftah   ","EE1105",10000},
 	 {"khawla   ","ibit     ","EE1445",10000},
 	 {"nohaila  ","laasmary ","EE1805",10000},
 	 {"achraf   ","beni mkad","EE1105",10000},
 	 {"abdesslam","bokri    ","EE1915",9000000},
 	 {"fouad    ","mqaoui   ","EE1105",10000},
 	 {"abdelaziz","mqaoui   ","EE1105",10000},
 	 {"abdo     ","assary   ","EE1110",8000},
 	 {"publou   ","anys     ","EE2334",6000},
 	 {"samir    ","ader     ","EE1110",9000}
 	 
	};

/// this function we us for serch with CIN
    void fun_serch_with_CIN(char s_serch[10],int _length){
     	int i,j;
     	int d=1;
     	int compte_1;     
     	for(i = 0;i<_length ;i++){
     		if(strcmp(All_comptes[i].CIN,s_serch) == 0){
     			
     			printf("%s || %s || %s || %0.2f DH \n",All_comptes[i].name,All_comptes[i].l_name,
				 All_comptes[i].CIN,All_comptes[i].montant);
				 //dbt :
				 printf("est-ce que le compte que vous choisissez :no(0)/yess(1)) ");
				 int ch;
				 scanf("%d",&ch);
				 if(ch == 1){
				 	//All_comptes[i].montant += 20000;
//				 	printf("%s || %s || %s || %0.2f \n",All_comptes[i].name,All_comptes[i].l_name,
//				 All_comptes[i].CIN,All_comptes[i].montant);
                
				 printf("1 : depot \n");
				 printf("2 : retrait \n");
				 printf("3 : Exit \n");
				 int n;
				 scanf("%d",&n);
				 float _money;
				 if(n == 1){
				 	//fun_depot();
				 	
		             printf("Entre money :");
		             scanf("%f",& _money);
		             if(_money >=100){
				
		                All_comptes[i].montant = All_comptes[i].montant + _money;
		                 printf("%s || %s || %s || %0.2f HD \n",All_comptes[i].name,All_comptes[i].l_name,
				        All_comptes[i].CIN,All_comptes[i].montant);
				 		
				        //fun_affiche_comptes( _length);
				        
				        	 }
							 	break;
				 }
				 	 //retrait
				else if(n == 2){
					dbentre:
				 	printf("How much money do you want to withdraw :");
				 	scanf("%f",& _money);
				 	if(_money >= 100 && _money <= All_comptes[i].montant){
				    
				 	All_comptes[i].montant = All_comptes[i].montant - _money;
				 	   
				 	fun_affiche_comptes( _length);
					 	break;
				 }
				 
				
				}else {
                  goto dbentre;
				 	fun_menu1(_length);
					//goto dbt;
				}
				 	//
				 }
				 
				 
				 
			 }
		
		 }
		 	 fun_menu1(_length);	
	}


	 
	void fun_affiche_comptes(int _length){
   	int i,j;
   	
	//printf("dddd %d",_length);
   	  for(i =1 ; i< _length ; i++){
   	  	
			
   	  	   printf("== %s - %s - %s - %0.2f DH\n",All_comptes[i].name ,All_comptes[i].l_name ,
   	  	   All_comptes[i].CIN ,All_comptes[i].montant);
   	  	   
		  
   }
   printf("1: Recherche par CIN :\n");
   printf("2: Exit \n");
   int s;
   scanf("%d",&s);
   switch(s){
   	case 1: {
	      printf("entre CIN : ");
	       char s_serch[10] ;
   	           scanf("%s",s_serch);
           fun_serch_with_CIN(s_serch,_length);
          break;
        }
   	case 2: 
   	     fun_menu1(_length);
   	break;
   }
}
	
//this function for creat  accontes
   void func_creat_acconte(int _length){
   	
   	int i;
   	int num_acconte;
   	printf("Combien de comptes voulez-vous creer ?  : ");
   	scanf("%d",&num_acconte);
 	//int  lenght = (int)( sizeof(client2) / sizeof(client2[0]) );
 	
	for(i = 1;i<= num_acconte ; i++ ){//dif:
	  
		printf("Entrer un nouveau compte : \n");
		printf("Entrer le prenom : \n");
		scanf("%s" ,All_comptes[_length].name);
		printf("Entrer le nom : \n");
		scanf("%s" ,All_comptes[_length].l_name);
		printf("Entrer CIN : \n");
		scanf("%s" ,All_comptes[_length].CIN);
		All_comptes[_length].montant =0;
		if(i== num_acconte){
			//c	goto dif;	
			break;
		}
		++_length;
		
	}
//	fun_affiche_comptes(_length );
 fun_menu1(_length);
   	
   }
   void fun_shows_largest_smallest(int _lenght){
   	   
   	   int i;
   	   int pevot = All_comptes[0].montant;
   	   for(i =0;i <=_lenght ;i++){
   	   	
   	   	printf("== %s - %s - %s - %0.2f \n",All_comptes[i].name ,All_comptes[i].l_name ,
   	  	   All_comptes[i].CIN ,All_comptes[i].montant);
		  }
   }
   void creat_one_compte(int _length){
   	printf("entre CIN :");
   	scanf("%s",All_comptes[_length].CIN);
   	
   	printf("entre name :");
   	scanf("%s",All_comptes[_length].name);
   	printf("entre last name :");	
   	scanf("%s",All_comptes[_length].l_name);
   	All_comptes[_length].montant = 0;
   	printf("%s || %s || %s || %.2f \n",All_comptes[_length].name ,All_comptes[_length].l_name ,
   	    All_comptes[_length].CIN ,All_comptes[_length].montant);
   	++_length;
   	
   fun_menu1( _length );
   }
void Decroissant (int length){
	int i, j, a;
	char s[50];
	  for (i = 0 ; i< length ; ++i)
        {
            
            for(j=i + 1 ; j<length ;++j)
            {
            	
                if(All_comptes[i].montant > All_comptes [j].montant)
                {
                     a = All_comptes[i].montant;
                     All_comptes[i].montant = All_comptes[j].montant;
                     All_comptes[j].montant= a ;
                      
                      
                    
                } 
        	}
        }
         printf("Affichage de comptes(Decroissant):\n");
        for (i = 0; i < length; ++i)
            printf(" %s  \t%s  \t%s  \t%.2f \n" , All_comptes[i].name , All_comptes[i].l_name 
			, All_comptes[i].CIN , All_comptes[i].montant );
	fun_menu1(length);            
}
   
    void fun_menu1(int _length){
   	
   //	debut :
   	printf("======================== Menu =========================\n");
    printf("\t 0 :Afficher tous les comptes & Recherche par CIN & Retirer et Deposer\n");
    printf("\t 1 :Créer un comptes \n");
   	printf("\t 2 :Créer un ou plusieurs comptes \n");	
   	printf("\t 3 :Afficher les comptes par ordre décroissant \n");
   	printf("\t 4 :Afficher les comptes par ordre croissant \n");
   	printf("\t 5 :Ajouter 1,3%% aux 3 premiers comptes \n");
   	int i;
   	printf("\t Entrez votre choix  : ");
   	    
   	db_menu:
	 scanf("%d",&i);
   	if(i >=0){
   		printf("\t Entrer un numéro : ");
	  
   	switch (i){
   		case 0:{
   			fun_affiche_comptes(_length);
			break;
		   }
   		case 1:{
   			creat_one_compte(_length);
   	
			break;
		   }
		 case 2:{ 
			
			func_creat_acconte(_length);
			break;
		   }
		case 3:{
			Decroissant(_length);
			break;
		   } 
		case 4:{
			break;
		   }       
   		case 5:{ 
   		
			break;
		   }
		 
		 	
		 goto db_menu;
		
		   	
	   }
	   
	    } //goto debute;
		 }
		 

int main() {
	
	
	system("color b0");
	//(int)( sizeof(All_comptes) / sizeof(int) );

	int length = (sizeof(All_comptes )) / (sizeof(All_comptes[0]));//Array length = size of array/ size of 1 int

	fun_menu1(length);
	
	return 0;
}
