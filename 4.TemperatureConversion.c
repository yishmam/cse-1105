#include<stdio.h>

int main(){

    printf("Temperature Conversion\n");
    printf("For C -> F Enter 1.\n For F -> C Enter 2.\n");
    int n;
    scanf("%d",&n);
    if(n==1){
        int a;
        printf("Enter Temperature in Celcius:\n");
        scanf("%d",&a);
        int F = (a*9)/5 + 32;
        printf("%d C -> F = %d\n",a,F);
    }
    else {
        int a;
        printf("Enter Temperature in Fahrenheit:\n");
        scanf("%d",&a);
        int C = ((a-32)*5)/9;
        printf("%d F -> C = %d\n",a,C);
    }

    return 0;
}