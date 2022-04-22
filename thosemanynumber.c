/*Requirement: Get a number from user and those many number to print it on console
*/
 #include <stdio.h> 
 
 int getNumberFromUser() {
     int i;
     printf("Please enter a number ");
     scanf("%d", &i);
     return i;
     }
     
void thoseManyNumberFromUser(int n) {
        for(int i = 0; i < n; i++){
            int num = getNumberFromUser();
            scanf("%d",&num);
        return num;
    }
}

void main() {
    thoseManyNumberFromUser(getNumberFromUser());
}
