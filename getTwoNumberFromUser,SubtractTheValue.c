// getTwoNumberFromUser,SubtractTheValueAndPrintItOnConsole

int getNumber(){
    int value;
   printf("Enter a number ");
   scanf("%d",&value);
   return value;
}
int getSubtraction(int i,int j){
    return i-j;
}
void main(){
int number1 = getNumber();
int number2 = getNumber();
int subtraction = getSubtraction(number1, number2);
printf("Subtraction value is %d", subtraction);
}
