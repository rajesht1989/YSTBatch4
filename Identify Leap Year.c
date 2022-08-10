// Write A Programme to Check Libe Year Or Not
#include <stdio.h> 
int getAYearFromUser(){
    int i;
    printf("Enter A Year ");
    scanf("%d",&i);
    return i;
}
void checkLeapYear(int a){
    //int n = 0;
    //for(int i = 0;i > a ;i == a){
        if(a % 400 == 0){
            printf("Leap Year %d ",a);
     }
  
     else if(a % 4 == 0){
         printf("Leap Year %d ",a);
     }
     
        else{
            printf("Its Not Leap Year %d ",a);
    }
  }


 void main(){
     checkLeapYear(getAYearFromUser());
     
 }
