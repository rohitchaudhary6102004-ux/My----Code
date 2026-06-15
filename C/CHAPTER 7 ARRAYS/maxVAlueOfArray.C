 #include<stdio.h>
 int main(){
    int arr[] = {2,3,5,6,38,9};
    int n = sizeof(arr)/4;
    int mx =arr[0];
    for(int i=1;i<n;i++){
        if(mx<arr[i]) mx = arr[i];
    
    }
    printf("%d ",mx);
 }