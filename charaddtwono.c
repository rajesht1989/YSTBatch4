/Req: Get a two character from user add them & print it on console
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
  char add = character1+character2;
  printf("Addition value is :",add);
}
