#include <stdio.h>
int getANumberFromUser(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    return n;
}
int incrementNumber(int n){
    return --n;
}
int main(){
    int n=getANumberFromUser();
    printf("%d\n",--n);
    return n;
}
