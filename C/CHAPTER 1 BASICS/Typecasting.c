#include<stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    // typecasting
    float a = (float)x;
    printf("Half of a number : %f",a/2);
    return 0;
}