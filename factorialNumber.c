//get number from user identity factorial number

#include<stdio.h>

int getNumber(){
    int a;
    printf("Number ah podunga Bro: ");
    scanf("%d",&a);
    return a;
}
void factorialNumber(int n){
    int a=1;
    for(int i=1;i<=n;i++){
    a=a*n; 
}
    printf("Factorial of  is: %d",a);
    
}
void main(){
    factorialNumber(getNumber());
}
 

