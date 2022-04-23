// get a number from user and draw hollow star pattern 
#include<stdio.h>
int getANumberFromUser(){
  int number;
  printf("Enter a number ");
  scanf("%d",&number);
  return number;
}
void printStarPattern(int n){
      
       for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
           if(i==1 || i==n || j==1 || j==n){
             
           
        printf("*\t");
         }else{
             printf("\t");
         }
        }
        printf("\n");
        }
       }
 void main(){
   printStarPattern(getANumberFromUser());
 }
