//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float celsius;
    printf("Enter temperature in Celsius : ");
    scanf("%f",&celsius);

    float fahrenheit;
    fahrenheit = (celsius*9/5)+32;
    printf("Temperature in Fahrenheit is : %f",fahrenheit);
    return 0;
}