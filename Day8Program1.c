//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the Character : ");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z' ) {
        printf("Lowercase Alphabet");
    }
    else if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    else {
        printf("special character");
    }
    return 0;
}