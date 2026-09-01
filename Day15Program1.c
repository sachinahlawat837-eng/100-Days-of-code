//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main() {
    int n;
    int factorial = 1;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n<=0){
        printf("Factorial of Negative number do not exist!");
    }
    else{
        for(int i=1;i<=n;++i){
            factorial = factorial*i;
        }printf("Factorial is : %d",factorial);
    }
    return 0;
}