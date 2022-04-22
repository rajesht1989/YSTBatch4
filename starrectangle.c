// Get a number from user and draw star rectangle 1:2 print it on console
 #include <stdio.h> 
 
 int getNumberOfWindows() {
     int i;
     printf("Please enter a number ");
     scanf("%d", &i);
     return i;
     }
     
void drawRectangleFor1Or2(int n) {
    for (int j = 0; j < n; j++) {
        for(int i = 0; i < n*2; i++){
            printf("* \t");
        } 
        printf("\n");
    }
}


void main() {
    drawRectangleFor1Or2(getNumberOfWindows());
}
