#include <iostream>
using namespace std;
int main(){
    int arr[] = {-10,-4,3,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left_ptr = 0;
    int right_ptr = n-1;
    int ans[n];
    int k = n-1;
    while(left_ptr <= right_ptr){
        if(abs(arr[left_ptr]) > abs(arr[right_ptr])){
            ans[k] = arr[left_ptr]*arr[left_ptr];
            left_ptr++;
            k--;
        }
        else{
            ans[k] = arr[right_ptr]*arr[right_ptr];
            right_ptr--;
            k--;
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    return 0;
}