//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    int time;
    printf("Enter Time in seconds : ");
    scanf("%d",&time);

    int hours,minutes,seconds;
    hours = time/3600;
    time = time%3600;
    minutes = time/60;
    seconds = time%60;

    printf("Time is : %d :%d :%d",hours,minutes,seconds);
    return 0;

}