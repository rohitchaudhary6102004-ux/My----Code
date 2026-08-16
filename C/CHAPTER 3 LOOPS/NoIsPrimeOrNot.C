#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    int check = 1; // 1 means prime no
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            check = 0; // 0 means  composite no 
            break;
        }
    }
        
        if (n==1) printf("%d is Neither prime nor composite",n);
        else if (check == 0) printf("%d is Composite no",n);
        else printf("%d is Prime number ",n);
    
    }