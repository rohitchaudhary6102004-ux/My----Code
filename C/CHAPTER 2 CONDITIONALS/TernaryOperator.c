#include<stdio.h>
int main(){
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);
    (x%2 == 0) ? printf("Even") : printf("Odd");
}