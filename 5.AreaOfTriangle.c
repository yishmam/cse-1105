#include<stdio.h>
#include<math.h>

int main(){

    printf("Enter Three Sides of a Triangle\n");
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a<0 || b<0 || c<0 || a+b<=c || b+c<=a || a+c<=b) {
        printf("Invalid Input\n");
        return 0;
    }
    double s = (a+b+c)/2;
    double area =sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is %.2lf",area);
    return 0;
}