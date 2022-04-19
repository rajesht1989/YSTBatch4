// Requirement:get age from user and identify eligible for vote using if else and terinary function 
#include <stdio.h>
int getAAgeFromUser(){
  int age;
  printf("Enter a age");
  scanf("%d", &age);
  return age;
}
void eligibleForVote(int age){
  if (age>=18){
  printf("you are eligible for vote");
  }
  else {
  printf("you are not eligible for vote");
  }
}
void identifyTheVoteForEligible(int age)
{
 age>18?printf("Adults"):printf("child");
}
void main(){
  eligibleForVote(getAAgeFromUser());
  identifyTheVoteForEligible(getAAgeFromUser());
 }
