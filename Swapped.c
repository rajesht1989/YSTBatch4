// a = 5,  b = 6 swapped and print it on console
#include<stdio.h>
void main(){
    int a = 5,b = 6,temp;
    temp = a;
    a = b ;
    printf("Swapped is a = %d \n",a);
    b = temp;
    printf("Swapped is b = %d",b);
}
