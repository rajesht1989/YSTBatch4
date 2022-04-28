// Get a char from user and check if it's Vowel
#include <stdio.h>

char getChar() {
    char c;
    printf("Enter a charecter to check if it's Vowel ");
    scanf("%c", &c);
    return c;
} 

int isVowel(char z) {
    int vowel = 0;
    switch (z) {
        case 'a': 
        vowel = 1;
        break;
        case 'A': 
        vowel = 1;
        break;
        case 'e': 
        vowel = 1;
        break;
        case 'E': 
        vowel = 1;
        break;
        case 'i': 
        vowel = 1;
        break;
        case 'I': 
        vowel = 1;
        break;
        case 'o': 
        vowel = 1;
        break;
        case 'O': 
        vowel = 1;
        break;
        case 'u': 
        vowel = 1;
        break;
        case 'U': 
        vowel = 1;
        break;
    }
    return vowel;
}

int main() {
    if (isVowel(getChar())) {
            printf("Entered Char is a Vowel");
    } else {
            printf("Entered Char is not a Vowel");
    }
    
    
    
    
    return 0;
}
