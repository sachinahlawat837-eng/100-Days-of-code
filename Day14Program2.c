//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main(){
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    int product = 1;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            product = product * i;
        }
    }
    printf("Product is : %d",product);
    return 0;    
}