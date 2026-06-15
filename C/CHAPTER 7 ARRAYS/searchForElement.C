#include<stdio.h>
#include<stdbool.h>
 int main(){
    int arr[] = {2,3,5,6,38,9};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int x = 10;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
        flag = true;
        break;
    }
    printf("\n\n");
    if(flag==true) printf("%d Exists",x);
    else printf("%d Doest nnot  exist",x);
    
 }