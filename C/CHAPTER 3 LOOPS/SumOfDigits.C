#include<stdio.h>
int main(){
     int x;
    printf("Enter the Number : ");
    scanf("%d ",&x);
    int sum = 0;
    while(x>0){
        int ld = x%10;
        x = x/10;
        sum = sum + ld;
        

    }
    printf("Sum of the Digits : %d",sum);
    return 0;
}