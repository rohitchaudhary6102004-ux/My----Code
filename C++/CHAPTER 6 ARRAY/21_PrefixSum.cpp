#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,4,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
     int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        arr[i] = sum;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}