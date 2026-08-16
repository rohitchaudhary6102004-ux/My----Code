#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    // int hf = 1;
    // for(int i=1;i<=n-1;i++){
    //     if(n%i==0) hf=i;
    // }
    // printf("Highest Factor is : %d",hf);
     
    int hf = 1;
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            hf = i;
            break;
        }
    }
    printf("Highest Factor is  : %d",hf);
    return 0;
}