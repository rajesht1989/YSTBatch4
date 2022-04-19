// write a program for get a number from user and understanding of increment and decrement that identify if pre and post
#include <stdio.h>

int getANumberFromUser() {
 int n;
 printf("Please enter a number :");
 scanf("%d",&n);
 return n;
}

int identifyIfPreIncrementAndPostIncrement(int n)
{
    if(n++)
    {
        printf("Pre increment number is :%d",n++);
        return (n++);
    }else if(++n){
        printf("Post increment number is :%d",++n);
        return (++n);
}else{
    printf("number is same");
    return n;
}
}

int identifyIfPreDecrementAndPostDecrement(int n){
    if(n--)
    {
        printf("Pre decrement number is :%d",n--);
        return (n--);
    }else if(--n){
        printf("Post decrement number is :%d",--n);
        return (--n);
}else{
    printf("number is same");
    return n;
}
}
void main (){
identifyIfPreIncrementAndPostIncrement(getANumberFromUser());
identifyIfPreDecrementAndPostDecrement(getANumberFromUser());
}
