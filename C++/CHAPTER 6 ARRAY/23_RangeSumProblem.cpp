#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i=0;i<n;i++){
        sum += arr[i];
        arr[i] = sum;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        int ans = 0;
        cin >> l >> r ;
        ans = arr[r-1] - arr[l-2]; // 1 based indexing in l and r
        cout << "Sum of elements bw l and r is : " << ans;
    }
}