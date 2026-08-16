#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if (a%3==0){
        if(a%5==0) printf("Divisible by 5 and 3");
        else printf("Not divisible");
    }
    else printf("Not Divisible");
    return 0;
}