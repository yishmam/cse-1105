#include<stdio.h>

int main(){
    printf("Enter Three Numbers\n");
    int a,b,c;
    printf("1:");
    scanf("%d",&a);
    printf("2:");
    scanf("%d",&b);
    printf("3:");
    scanf("%d",&c);
    if(a>b && a>c) printf("Greatest Number is: %d",a);
    else if(b>a && b>c) printf("Greatest Number is: %d",b);
    else printf("Greatest Number is: %d",c);

    return 0;
}