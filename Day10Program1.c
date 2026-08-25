//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main() {
    int side1 , side2 , side3;
    printf("Enter the Sides : ");
    scanf("%d %d %d",&side1 ,&side2 ,&side3);

    if(side1 == side2 && side1 == side3){
        printf("Equilateral Triangle");
    }
    else if((side1 == side2 && side2 != side3) || (side2 == side3 && side3 != side1) || (side1 == side3 && side3 != side2)){
        printf("Isosceles Triangle");
    }
    else(side1 != side2 && side2 != side3){
        printf("Scalene Triangle");
    }
    return 0;
}