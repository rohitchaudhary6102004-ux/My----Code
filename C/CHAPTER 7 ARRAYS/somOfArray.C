#include<stdio.h>
int main(){
    int arr[] = {5,8,1,9,4,7,5,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    printf("%d ",sum);
}