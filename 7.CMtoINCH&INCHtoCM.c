#include<stdio.h>

int main(){

    printf("CM -> INCH & INCH -> CM\n");
    printf("For CM -> INCH Enter 1.\n For INCH -> CM Enter 2.\n");
    int n;
    scanf("%d",&n);
    if(n==1){
        double cm;
        printf("Enter CM:\n");
        scanf("%lf",&cm);
        double inch = cm/2.54;
        printf("%.2lf CM -> INCH = %.2lf\n",cm,inch);
    }
    else {
        double inch;
        printf("Enter INCH:\n");
        scanf("%lf",&inch);
        double cm = inch*2.54;
        printf("%.2lf INCH -> CM = %.2lf\n",inch,cm);
    }

    return 0;
}