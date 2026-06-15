#include<stdio.h>
int main(){
    int a ,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Second number is : ");
    scanf("%d",&b);
    printf("Remainder is : %d",a%b);
    return 0;
}
// if a << b then a%b is a
// if a%(-b) then a%b
// if (-a)%b then -(a%b)
// if (-a)%(-b)then -(a%b)