// get number from user and identify below factor number 
#include<stdio.h>
int getNumber(){
    int n;
printf("Enter The Number ");
scanf("%d",&n);
return n;
}
void factorNumber(int a){
    for(int i = 1; i <= a ; i++){
        if(a % i == 0 ){
            printf ("%d ",i);
        }
    }
}
void main(){
    factorNumber(getNumber());
}
