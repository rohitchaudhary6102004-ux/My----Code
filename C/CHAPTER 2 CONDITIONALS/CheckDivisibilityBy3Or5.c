#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if (a%3==0 || a%5==0) printf("Yes Divisble");
    else printf("Not Divisible");
    return 0;
}