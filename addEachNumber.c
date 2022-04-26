// get number from user add each number
# include<stdio.h>
int getNumber(){
    int a;
    printf("Number ah podunga Bro: ");
    scanf("%d",&a);
    return a;
}
int addEachValue(int n){
   int a=0;
   for(int i=n;i>0;i/=10){
       a = a + i%10;   
   }
       printf("%d",a);
}

void main(){
    addEachValue(getNumber());
   
}
