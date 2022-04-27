// get a number from user and print a Pascal's triangle in 123 order
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter The Limit " );
    scanf("%d", &number);
    printf("\n ");
    return number;
}
void printAPascalsTriangle(int n){
            printf(".\n");
int a = 0;
      for(int i=0;i<n;i++){
          for(int j=0;j<=(n-i-2);j++){
            printf("\t");
        }
        for(int j=1; j<=2*i+1; j++){
            printf ("%d\t", ++a);
        }
        printf("\n");
    }
}
void main(){
    printAPascalsTriangle(getANumberFromUser());
}
