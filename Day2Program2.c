//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    int radius;
    printf("Enter radius : ");
    scanf("%d",&radius);

    float area,circumference;
    area = 3.14*radius*radius;
    printf("area is : %f\n",area);

    circumference = 2*3.14*radius;
    printf("circumference is : %f",circumference);
    return 0;
}