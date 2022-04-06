/Req: Get a two character from user division them & print it on console
#include<studio.h>
char getATwoCharacterFromUser()
{
 char n;
 printf("Enter a character is :");
 scanf("%c",&i);
 return i;
 }
 void main ()
 {
  char character1 = getATwoCharacterFromUser();
  char character2 = getATwoCharacterFromUser();
  char div = character1/character2;
  printf("Division value is :",div);
}
