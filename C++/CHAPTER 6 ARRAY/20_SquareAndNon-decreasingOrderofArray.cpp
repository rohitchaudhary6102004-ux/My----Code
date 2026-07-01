#include <iostream>
using namespace std;
int main(){
    int arr[] = {-10,-4,3,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left_ptr = 0;
    int right_ptr = n-1;
    while(left_ptr <= right_ptr){
        if(abs(arr[left_ptr]) > abs(arr[right_ptr])){
            arr[left_ptr] = arr[left_ptr]*arr[left_ptr];
        }
        else{
            arr[right_ptr] = arr[right_ptr]*arr[right_ptr];
        }
    }
    for(int i=0;i<n;i++){
        cout << " Hello" << endl;
        cout << arr[i] << " ";
    }
    return 0;
}