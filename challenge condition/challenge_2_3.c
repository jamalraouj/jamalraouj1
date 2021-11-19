int main() {
    char voyelle;
    printf("Entrer un  charactere \n :");
        scanf("%c",&voyelle);

    switch (voyelle) {
        case 'a': printf("c'est une voyelle !");
              break;
        case 'e': 
            printf("c'est une voyelle !'");
            break;
        case 'i': 
            printf("c'est une voyelle !'");
            break;
        case 'u': 
            printf("c'est une voyelle !'");
            break;
        case 'o': 
            printf("c'est une voyelle !'");
            break;
        case 'y': 
        printf("c'est une voyelle !'");
            break;
        default: 
            printf("c'est pas une voyelle (invalid!)'");


    }

    return 0;
}

