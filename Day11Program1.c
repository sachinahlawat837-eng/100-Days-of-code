//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main() {
    int month;
    printf("Enter Month(1-12) : ");
    scanf("%d",&month);

    switch(month){
        case 1 : printf("January , 31Days");
        break;
        case 2 : printf("Febuary , 28Days");
        break;
        case 3 : printf("March , 31Days");
        break;
        case 4 : printf("April , 30Days");
        break;
        case 5 : printf("May , 31Days");
        break;
        case 6 : printf("June , 30Days");
        break;
        case 7 : printf("July , 31Days");
        break;
        case 8 : printf("August , 31Days");
        break;
        case 9 : printf("September , 30Days");
        break;
        case 10 : printf("October , 31Days");
        break;
        case 11 : printf("November , 30Days");
        break;
        case 12 : printf("December , 31Days");
        break;
        default : printf("Not a Valid Month !");
    }
    return 0;
}