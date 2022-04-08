//write a program that uses assignment operations of them & print it on console
#include<stdio.h>
int main(){
int a = 10,b = 4;
 a+=b;
 printf("Addition is : %d\n",a+=b);
 
 a-=b;
 printf("Subraction is : %d\n",a-=b);
 
 a*=b;
 printf("Multiplication is : %d\n",a*=b);
 
 a/=b;
 printf("Division is : %d\n",a/=b);
 
 a%=b;
 printf("remainder is : %d\n",a%=b);
 
 return 0;
}
