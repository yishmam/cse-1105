#include<stdio.h>

int main(){
    printf("Enter Two Sides of a Rectangle\n");
    double a,b;
    printf("Side a = ");
    scanf("%lf",&a);
    printf("Side b = ");
    scanf("%lf",&b);
    printf("Area of Rectangle = %.2lf",a*b);
    return 0;
}