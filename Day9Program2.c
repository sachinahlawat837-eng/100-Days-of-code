/* Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include<stdio.h>
int main(){
    int percentage;
    printf("Enter Percentage : ");
    scanf("%d", &percentage);

    if(percentage>=90 && percentage<=100){
        printf("Grade is A\n");
    }
    else if(80<=percentage && percentage<=89){
        printf("Grade is B\n");
    }
    else if(70<=percentage && percentage<=79){
        printf("Grade is C\n");
    }
    else if (60<=percentage && percentage <=69){
        printf("Grade is D\n");
    }
    else if(percentage<60){
        printf("Grade is F\n");
    }
    else{
        printf("Invalid Marks !");
    }
    return 0; 
}