#include<stdio.h>
int main(){
    int arr[] = {5,8,1,4,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int product = 1;
    for (int i=0;i<n;i++){
        product = product * arr[i];
    }
    printf("%d ",product);
}