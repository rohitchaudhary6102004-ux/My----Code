#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    // divisible by 5 or 3 but not 15
    if (a%15!=0){
        if (a%3!=0){
            if(a%5==0) printf("Condition Valid");
            else printf("Condition Invalid");
        }
        else // x%3 = 0
        printf("Condition Valid");
    }
    else // x%15 = 0 
    printf("Condition Invalid");
    return 0;
}