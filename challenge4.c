#include <stdio.h>
#include <stdlib.h>
int main (){

    int a ,b ,c;
    int somme,moyenne;
    printf("entrer le nombre a : ");
    scanf("%d",&a);
    printf("entrer le nombre b : ");
    scanf("%d",&b);
    printf("entrer le nombre c : ");
    scanf("%d",&c);

    somme = a + b + c;
    moyenne = somme / 3;
    printf("la somme : %d \n",somme);
    printf("moyenne : %d \n ",moyenne);
   
   return 0;
    
}