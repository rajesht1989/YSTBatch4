//get number from user and identify first digit 
# include<stdio.h>
int getNumberFromUser(){
    int a;
    printf("Number ah podunga Bro: ");
    scanf("%d",&a);
    return a;
}
int identifyFirstDigit(int a){
               int i = 0;
   for ( int j =a ;j>10;j/=10){
       i = j/10;
   }
   printf("First Digit is %d",i);
return a;
    }


void main(){
    identifyFirstDigit(getNumberFromUser());
}
