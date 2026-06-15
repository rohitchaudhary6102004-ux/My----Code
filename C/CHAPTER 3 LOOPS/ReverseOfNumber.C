#include<stdio.h>
int main(){
     int x;
    printf("Enter the Number : ");
    scanf("%d ",&x);
    int r = 0;
    while(x>0){
        int ld = x%10;
        r = r*10;
        r = r+ld;
        x = x/10;

    }
    printf("Reverse of the Digits : %d",r);
    return 0;
}