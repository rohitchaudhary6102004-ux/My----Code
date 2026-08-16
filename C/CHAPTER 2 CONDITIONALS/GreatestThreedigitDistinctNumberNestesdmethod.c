#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number  : ");
    scanf("%d",&c);
    if (a>b){
        if (a>c) printf("greatest number is %d",a);
        else printf("Greatest number is %d",c);
    }
    else printf("Greatest number is %d",b);
    return 0;
}