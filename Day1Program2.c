//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

    int sum,difference,product,quotient;
    sum = a+b;
    printf("sum is : %d\n",sum);

    difference = a-b;
    printf("difference is : %d\n",difference);

    product = a*b;
    printf("product is : %d\n",product);

    quotient = a/b;
    printf("quotient is : %d\n",quotient);
    return 0;
}