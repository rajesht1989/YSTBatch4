//Get A No From User And Identify Facters No
#include <stdio.h>
int getNoFromUser(){
    int i;
    printf("Enter A Number ");
    scanf("%d",&i);
    return i;
}
void printFactersNo(int a){
    for(int i = 1 ;i < a;i++){
      if(a%i == 0){
        printf("Facters No %d \n",i);
 }  
 
}
}
void main(){
    printFactersNo(getNoFromUser());
}
