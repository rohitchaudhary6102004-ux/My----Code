#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",(3*i)+1);
    }
    return 0;
}