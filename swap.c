//Req : int a= 5, int=6 is swapping the assign the value & it on console 
#include <stdio.h>
int main(){
int a = 5,b= 6,temp;
 printf("The original value %d %d\n",a,b);
 temp = a;
 a = b;
 b = temp;
 printf("The swapping value :%d %d",a,b);
 return 0;
}
