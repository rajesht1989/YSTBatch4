// Requirement:Program use to logical operators
#include <stdio.h>
void main(){
    int b,p;
    printf("Enter values for b and p");
    scanf("%d , %d",(&b,&p));
    printf("\n %d",(b<p)&&(b!=p));
    printf("\n %d",(b<p)||(b<p));
    printf("\n %d",!(b==p));
}
