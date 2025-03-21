#include<stdio.h>
#include<math.h>

int main(){
    printf("Enter a Number: ");
    int n;
    scanf("%d",&n);
    printf("Square of %d is %d\n",n,n*n);
    printf("Square Root of %d is %.2f\n",n,sqrt(n));
    return 0;
}