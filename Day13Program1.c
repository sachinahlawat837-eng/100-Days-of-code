//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main(){
    int no1,no2,result;
    char operator;

    printf("Enter 1st Number : ");
    scanf("%d",&no1);

    printf("Enter 2nd Number : ");
    scanf("%d",&no2);

    printf("Enter the Operator : ");
    scanf(" %c",&operator);

    switch(operator){
        case '+' :
        result = no1+no2;
        printf("%d",result);
        break;

        case '-' :
        result = no1-no2;
        printf("%d",result);
        break;

        case '*': 
        result = no1*no2;
        printf("%d",result);
        break;

        case '/':
        if(no2 != 0){
            result = no1/no2;
            printf("%d",result);
        }
        else{
            printf("Division by 0 is undefined!");
        }
        break;
        
        case '%':
        if(no2 != 0){
            result = no1%no2;
            printf("%d",result);
        }
        else{
            printf("Modulus by 0 is Undefined!");
        }
        break;  
    }
    return 0;
}