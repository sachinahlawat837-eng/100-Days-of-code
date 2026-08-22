//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter no1 : ");
  scanf("%d",&a);
  
  printf("Enter no2 : ");
  scanf("%d",&b);
  c=a+b;
  a=c-a;
  b=c-b;;
 
  printf("no1 : %d\n",a);
  printf("no2 : %d\n",b);
  return 0;

}