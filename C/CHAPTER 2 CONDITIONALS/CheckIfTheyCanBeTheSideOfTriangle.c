#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number  : ");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b) printf("Forms a Triangle");
    else printf("Does not forms triangle");
    return 0;
}