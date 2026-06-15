#include<stdio.h>
 int main(){
    int arr[] = {2,3,5,6,38,9};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int x = 4;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>x)
        count++;
    }
    printf("\n%d ",count);
 }