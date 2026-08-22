//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
    int n,Sn;
    printf("Enter n : ");
    scanf("%d",&n);

    Sn = n*(n+1)/2;
    printf("sum of n natural numbers is : %d\n",Sn);
    return 0;
}