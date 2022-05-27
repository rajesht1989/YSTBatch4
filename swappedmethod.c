#include<stdio.h>
int main(){
    int a=6;
    int b=8;
    swappAndPrint(a,b);
}
void swappAndPrint(int a,int b){
    int temp=b;
    b=a;
    a=temp;
    printf("Swapp is %d %d",a,b);
}
