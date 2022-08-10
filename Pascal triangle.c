// draw pascal triangle
#include <stdio.h>
int getANumberFromUser(){
    int i;
    printf("Enter A Number ");
    scanf("%d",&i);
    return i;
}
void drawPascalTriangle(int a){
    int n=1;
    for(int i = 0;i < a;i++){
 for(int j = 0;j < a -1 - i;j++){
   printf("\t");
 }
  for(int k = 0;k <= i * 2 ;k++){
        printf("%d \t",n++);
        }
        printf("\n");
    }

}


int main() {
    
    drawPascalTriangle(getANumberFromUser());
    
    return 0;
}
