#include<stdio.h>
#include<math.h>

int main(){
    double pi = 3.1416;
    printf("For Radius -> Area Enter 1.\n For Area -> Radius Enter 2.\n");
    int n;
    scanf("%d",&n);
    if(n==1){
        double a;
        printf("Enter Radius:\n");
        scanf("%lf",&a);
        double area = pi*a*a;
        printf("Area = %.2lf\n",area);
    }
    else {
        double a;
        printf("Enter Area of a Circle:\n");
        scanf("%lf",&a);
        double radius = sqrt(a/pi);
        printf("Radius = %.2lf\n",radius);
    }

    return 0;
}
