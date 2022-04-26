//get number from user  identify last digit
# include<stdio.h>
int getNumber(){
    int a;
    printf("Number ah podunga Bro: ");
    scanf("%d",&a);
    return a;
}
int identifyLastNumber(int n){
    int a = n % 10 ;
        printf("%d",a);
return n;
    }


void main(){
    identifyLastNumber(getNumber());
}
