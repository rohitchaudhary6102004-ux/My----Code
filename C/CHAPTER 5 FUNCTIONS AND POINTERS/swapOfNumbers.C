#include<stdio.h>
int  main(){
    int a,b;
    scanf("%d ",&a);
    scanf("%d ",&b);
    printf("%d  %d\n",a,b);
    // swap
    // int temp = a;
    // a = b;
    // b = temp;
    // swap without using extra variable

    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("%d  %d",a,b);
}