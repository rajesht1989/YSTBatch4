/*Requirement: Get a number from user and identify factor of print it on console
*/
#include <stdio.h>
int getANumberFromUser()
{
    int n;
    printf ("Please enter a number : ");
    scanf("%d",&n);
    return n;
}
void checkFactor(int n)
{
    for(int i = 2; i <= n /2 ; i ++){
        if(n % i == 0){
            printf ("The factor is : %d \n",i);
        }
    }
}    

void main() {
    int n = getANumberFromUser ();
    checkFactor(n);
}
