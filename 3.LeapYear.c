#include<stdio.h>

int main(){
    int n;
    printf("Enter a Year: \n");
    scanf("%d",&n);
    if(n%4==0){
      if(n%100==0||n%400==0){
        printf("This is a leap year.\n");
      }
      else{
        printf("This is not a leap year.\n");
      }
    }
    else printf("This is not a leap year.\n");

    return 0;
}