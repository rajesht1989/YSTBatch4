//get a number from user and identify the Factorial
# include<stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
    }
    int identifyFactorial(int n){
     int f = 1;
     for(int i=2;i<=n;i++){
         printf("%d\n",i);
       f = f*i;
      }
     return f;
    }
  void main(){
   int number = getANumberFromUser();
   int factorial = identifyFactorial(number);
    printf("Factorial is %d %d",number, factorial);
  }
