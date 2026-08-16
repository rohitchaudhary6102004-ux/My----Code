#include<stdio.h>

 int main(){
    int arr[] = {2,3,5,6,38,9};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i] = arr[n-1-i];
        printf("%d ",brr[i]);
    }
 }