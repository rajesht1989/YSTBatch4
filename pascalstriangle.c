/* get a number from user and print a Pascal's triangle in 123 order
 - Write a function to get a number from user using scanf.
  - Write a function to print the pascal triangle using for loop condition.
  - Write a main function to invoke the get number and print the pascal triangle functions.
*/
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
