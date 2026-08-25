//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main () {
    float a,b,c,root1,root2,discriminant;
    printf("Enter Coefficients a, b, c : ");
    scanf("%f %f %f",&a ,&b ,&c);

    if(a==0){
        printf("a cannot be zero for a quadratic equation\n");
    }

    discriminant = (b*b) - (4*a*c);
    if(discriminant > 0){
        root1=(-b + sqrt(discriminant))/(2*a);
        root2=(-b - sqrt(discriminant))/(2*a);
        printf("Real and Distinct roots\n");
        printf("Root 1 = %.2f\n",root1);
        printf("Root 2 = %.2f\n",root2);
    }
    else if(discriminant == 0){
        root1 = root2 = -b/(2*a);
        printf("Real and Equal roots\n");
        printf("Root1 = Root2 = %.2f\n",root1);
    }
    else{
        printf("Complex roots\n");
    }
    return 0;

}