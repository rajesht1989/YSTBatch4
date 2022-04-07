// Understanding Increment and Decrement
#include <stdio.h>

int main() {
    
    int i = 8;
    
    
    printf("Pre increment on line %d \n", ++i);
    i = 8;
    ++i;
    printf("Pre increment after line %d \n", i);
    i = 8;
    
    printf("Post increment on line %d \n", i++);
    i = 8;
    i++;
    printf("Pre increment after line %d \n", i);
    i = 8;
    
    printf("Pre decremtent on line %d \n", --i);
    i = 8;
    
    --i;
    printf("Pre decremtent after line %d \n", i);
    i = 8;
    
    printf("Post decremtent on line %d \n", i--);
    i = 8;
    
    i--;
    printf("Pre decremtent after line %d \n", i);
    
    
    return 0;
}
