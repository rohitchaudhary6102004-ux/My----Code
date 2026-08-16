#include<stdio.h>
int main(){
    int arr[] = {2,3,5,6,38,9};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int i = 0;
    int j = n-1;
    while(i<j){
        // swap of arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
 }
}