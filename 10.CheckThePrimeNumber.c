#include<stdio.h>

int main(){

    printf("Enter A Number: ");
    int n;
    int flg=1;
    scanf("%d",&n);
    if(n<=1) {
        printf("Not a Prime Number");
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                flg=0;
                break;
            }
        }
    }
    if (flg) printf("%d is Prime Number", n);
    else printf("%d is not a Prime Number", n);

    return 0;
}