#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    if (x>99 && x<999) printf("Three digit Number ");
    else printf("Not a three digit number ");
    return 0;
}