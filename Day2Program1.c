//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter length : ");
    scanf("%d",&length);

    printf("Enter breadth :");
    scanf("%d",&breadth);

    int area,perimeter;
    area = length*breadth;
    printf("area is : %d\n",area);

    perimeter = 2*(length+breadth);
    printf("perimeter is : %d\n",perimeter);
    return 0;
}