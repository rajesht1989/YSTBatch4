#include<stdio.h>
int getNum(){
    int number;
    printf("Enter a Number ");
    scanf("%d",&number);
    return number;
}
int getFibi(int n ){
    int f1 = 0;
    int f2 = 1;
    int f3;{
        for(int i = 1;i<=n;i++){
            f3 = f1+f2;
            printf("%d",f1);
            f1 = f2;
            f2 = f3;
        }
    }

}
int main(){
    getFibi(getNum());
}
