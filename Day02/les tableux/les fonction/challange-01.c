#include <stdio.h>
#include<stdlib.h>
int a,b,s;
int somme(int a,int b){
    int s=a+b;
    return s;
}
int main(){
    int resultat;
    printf("entre a:  " );
    scanf("%d",&a );

     printf("entre b:  " );
    scanf("%d",&b );
   resultat=somme(a,b);
printf("la somme de a+b=%d", resultat);
return 0;
    
}