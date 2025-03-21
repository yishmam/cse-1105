#include<stdio.h>

int main(){
    printf("Enter your subject marks:");
    int marks;
    scanf("%d",&marks);
    if(marks>100 || marks<0) printf("Invalid Input");
    else if(marks>=80) printf("Your CGPA is 4.00 (A+)");
    else if(marks>=75 && marks<80) printf("Your CGPA is 3.75 (A)");
    else if(marks>=70 && marks<75) printf("Your CGPA is 3.50 (A-)");
    else if(marks>=65 && marks<70) printf("Your CGPA is 3.25 (B+");
    else if(marks>=60 && marks<65) printf("Your CGPA is 3.00 (B)");
    else if(marks>=55 && marks<60) printf("Your CGPA is 2.75 (B-)");
    else if(marks>=50 && marks<55) printf("Your CGPA is 2.50 (c+)");
    else if(marks>=45 && marks<50) printf("Your CGPA is 2.25 (C)");
    else if(marks>=40 && marks<45) printf("Your CGPA is 2.00 (D)");
    else if(marks>=0 && marks<40) printf("Your CGPA is 0.00 (F)");

    return 0;
}