// Requirment : Get a number from user and draw the pascals triangle print it on console.
#include <stdio.h> 
 
 int getANumberFromUser() {
     int n;
     printf("Please enter a number ");
     scanf("%d", &n);
     return n;
     }
     
void drawEqualatorTriangle(int n) {
    int a=1;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++){
        printf("\t");
}
            for(int k = 0; k <= i * 2 ; k++ ){
            printf("%d \t",a++);
            }
        printf("\n");
    }
}

void main(){
drawEqualatorTriangle(getANumberFromUser());
}
