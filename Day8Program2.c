//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main(){
    int no1,no2,no3;
    printf("Enter the 1st Number : \n");
    scanf("%d",&no1);
    printf("Enter the 2nd Number : \n");
    scanf("%d",&no2);
    printf("Enter the 3rd Number : \n");
    scanf("%d",&no3);

    if(no1>no2&&no1>no3){
        printf("1st Number is the Largest");
    }else if(no2>no1&&no2>no3){
        printf("2nd Number is the Largest");
    }else if(no3>no1&&no3>no2){
        printf("3rd Number is the Largest");
    }
    else{
        printf("Invalid Input!");
    }
    return 0;
}