#include<stdio.h>
int main(){
    int arr[] = {12,34,56,78,35,64,75,23,44,5,6,7,83,6,34};
    printf("\n %lu \n",sizeof(arr[0]));
    int n = sizeof(arr)/4;
    // int n = sizeof(arr)/sizeof(arr[7]);

    printf("\n %d \n\n\n",n);

    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;

}