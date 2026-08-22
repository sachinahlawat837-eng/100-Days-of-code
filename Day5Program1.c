//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time;
    printf("Enter Principal : ");
    scanf("%f",&principal);

    printf("Enter Rate : ");
    scanf("%f",&rate);

    printf("Enter Time : ");
    scanf("%f",&time);

    float SI,CI,Amount;
    SI = principal*rate*time/100;
    printf("Simple Interest is : %.2f\n",SI);
    
    Amount = principal*pow((1+rate/100),time);
    CI = Amount-principal;
    printf("Compound Interest is : %.2f\n",CI);
    return 0;
}