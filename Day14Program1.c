//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    int sum = 0; 
    for(int i=1;i<=n;i++){
        sum=sum+(2*i-1);
    }
     printf("Sum is : %d\n",sum);
    return 0;
}