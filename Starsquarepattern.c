// get a number from user and draw a square star pattern
 #include <stdio.h> 
 
 int getNumberOfWindows() {
     int i;
     printf("Please enter a number ");
     scanf("%d", &i);
     return i;
     }
     
void drawSquare(int n) {
    for (int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++) {
            printf("* \t");
        } 
        printf("\n");
    }
}

void main() {
    drawSquare(getNumberOfWindows());
}
