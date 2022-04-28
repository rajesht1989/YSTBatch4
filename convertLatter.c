// Online C compiler to run C program online
#include <stdio.h>

int getNumberFromUser(){
    int n;
    printf ("Enter A Digits ");
    scanf("%d",&n);
    return n;
}
void convertLetter(int a){
switch(a){
case 0:
printf("Zero ");
break;
case 1:
printf("One ");
break;
case 2:
printf("Two ");
break;
case 3:
printf("Three ");
break;
case 4:
printf("Four ");
break;
case 5:
printf("Five ");
break;
case 6:
printf("Six ");
break;
case 7:
printf("Seven ");
break;
case 8:
printf("Eight ");
break;
case 9:
printf("Nine ");
break;
case 10:
printf("Ten ");
break;
case 11:
printf("Eleven");
break;
case 12:
printf("Twelve ");
break;
case 13:
printf("Thirteen ");
break;
case 14:
printf("Fourteen ");
break;
case 15:
printf("Fifteen ");
break;
case 16:
printf("Sixteen ");
break;
case 17:
printf("Seventeen ");
break;
case 18:
printf("Eighteen ");
break;
case 19:
printf("Nineteen ");
break;
case 20:
printf("Twinty");
default :
printf(" not have to conver ");

}
}
void main(){
    convertLetter(getNumberFromUser());
}
