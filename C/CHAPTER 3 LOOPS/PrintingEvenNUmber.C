#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(i%2 == 0){
        printf("%d\n",i);
    }
}
    // Method 2
    
    // for(int i=2;i<=n;i=i+2){
    //     printf("%d\n",i);
    // }
    return 0;
} 