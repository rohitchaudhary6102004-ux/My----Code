#include<stdio.h>
int main(){
     int x;
    printf("Enter the Number : ");
    scanf("%d ",&x);
    int p = 1;
    for (int i=1;i<=x;i++)
    {   
        p=p*i;
    }
    printf("Factorial of %d is %d ",x,p);
    return 0;
}