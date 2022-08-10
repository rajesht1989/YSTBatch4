// get a no From user get those many number add them print it on Console
#include <stdio.h>
int getANumberFromUser(){
    int i;
    printf("Enter a Number ");
    scanf("%d",&i);
    return i;
}
int addThemNumber(int a){
    int addition = 0;
    for(int i=0;i<a;i++){
    printf("number of %d",i+1);
     addition += getANumberFromUser ();
    
}
return addition;
}
void main(){
    int number = getANumberFromUser ();
    int addition = addThemNumber(number);
    printf("Addition  number is %d %d",number,addition);
    
}
