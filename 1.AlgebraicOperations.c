#include <stdio.h>

int main(){
    int a,b;
    printf("Enter Two Numbers Where First Number Should Be Larger\n");
    printf("Enter First Number:\n");
    scanf("%d",&a);
    printf("Enter Second Number:\n");
    scanf("%d",&b);
    printf("Summation: (a+b) = %d\n",a+b);
    printf("Subtraction: (a-b) = %d\n",a-b);
    printf("Multiplication: (a*b) = %d\n",a*b);
    printf("Division: (a/b) = %d\n",a/b);
    printf("Reminder: (a%b) = %d\n",a%b);
    return 0;
}