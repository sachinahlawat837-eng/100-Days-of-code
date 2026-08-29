/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include<stdio.h>
int main() {
    int units , bill;
    printf("Enter Units Consumed : ");
    scanf("%d",&units);

    if(units>=0 && units<=100){
        bill = units*5;
        printf("Bill is : %d\n",bill);
    }
    else if(units>100 && units<=200){
        bill = (100*5)+((units-100)*7);
        printf("Bill is : %d\n",bill);
    }
    else if(units>200 && units<=300){
        bill =(100*5)+(100*7)+((units-200)*10);
        printf("Bill is : %d\n",bill);
    }
    else if(units>300){
        bill = (100*5)+(100*7)+(100*10)+((units-300)*12);
        printf("Bill is :%d\n",bill);
    }
    else{
        printf("Invalid Input!");
    }
    return 0;
}