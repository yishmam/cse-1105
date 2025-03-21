#include<stdio.h>

int main(){
    printf("Enter a Number: ");
    int n;
    scanf("%d",&n);
    if(n%2==0) printf("%d is Even",n);
    else printf("%d is Odd",n);

    return 0;
}