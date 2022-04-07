//Req : int a= 5, int=6 is swapping the assign the value & it on console 
#include <stdio.h>
int main(){
int a = 5,b= 6,temb;
 printf("The online value%d %d\n",a,b);
 scanf("%d %d",&a,&b);
 temb = a;
 a = b;
 b = temb;
 printf("The swapping value :%d %d",a,b);
 return 0;
}
