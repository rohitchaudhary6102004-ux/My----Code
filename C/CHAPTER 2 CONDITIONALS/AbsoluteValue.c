#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if (a<0) printf("Absolute value is : %d",-(a));
    if (a>=0) printf ("Absolute value : %d",a);
    return 0;
}