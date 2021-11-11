#include <unistd.h>
#include <stdio.h>

int main(){
    
    char name[30];
    char l_name[30];
    char age[30];
    char gender[30];
    char phone[30];

    printf("Entre your name :\n");
    scanf("%s", name);

	  printf("Entre your last name :\n");
    scanf("%s", l_name);

    printf("Entre your age :\n");
    scanf("%s", age);

    printf("Entre your gender :\n");
    scanf("%s", gender);

    printf("Entre your phone :\n");
    scanf("%s", phone);


    printf("this is your sInfo : %s %s | Age : %s | gender : %s | phone : %s .\n", name, l_name, age, gender, phone);

    return 0;
}
