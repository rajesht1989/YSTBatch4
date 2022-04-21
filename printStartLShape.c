//get number from user and print star L shale on console 
#include <stdio.h>

void printStar(int a){
for(int i=0;a>i;i++){
    printf("*\n");
}
for(int i=0;a>i;++i){    
      printf("*");
}

}
int main() {
    int n = 5;
  printStar(n);

    return 0;
}
