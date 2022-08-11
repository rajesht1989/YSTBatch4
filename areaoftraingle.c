// write a program to find out the area of triangle get number from user and print it on console.
#include<stdio.h>
int getNumberFromUser(){
    int i;
    scanf ("%d",&i);
    return i;
}
    int findTheAreaOfTriangle (int h, int b){
        return ((h*b)/2);
    }
    int main(){
        printf ("enter a height ");
        int height = getNumberFromUser();
        printf ("enter a base ");
        int base=getNumberFromUser();
        int areaOfTriangle=findTheAreaOfTriangle(height,base);
        printf ("area of triangle is %d",areaOfTriangle);
        return 0;
    }
