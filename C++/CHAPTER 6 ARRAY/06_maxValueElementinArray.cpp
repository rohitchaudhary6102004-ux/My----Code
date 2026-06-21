#include <iostream>
using namespace std;
int main(){
    int arr[] = {6,3,9,7,9,12,5,6,1,14,13,15};
    cout << sizeof(arr) << endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Max number is : " << max;
    return 0;

}