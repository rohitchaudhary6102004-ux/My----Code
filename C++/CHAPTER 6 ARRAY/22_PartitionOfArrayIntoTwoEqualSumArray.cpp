#include <iostream>
using namespace std;
int main(){
    int arr[] = {6,2,4,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tsum = 0; // tsum -->> total sum
    bool flag = false;
    for(int i=0;i<n;i++){
        tsum += arr[i];
    }
    int psum = 0;  // psum -->> prefix sum
    for(int i=0;i<n;i++){
        psum += arr[i];
        int ssum = tsum - psum; // ssum -->> suffix sum
        if( psum == ssum){
            flag = true;
        }
    }
    if (flag == true){
        cout << "True";
    }else{
        cout << "False";
    }
}