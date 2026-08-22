//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);

    printf("Enter 2nd number : ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("1st no. is : %d\n",a);
    printf("2nd no. is : %d\n",b);
    return 0;

}