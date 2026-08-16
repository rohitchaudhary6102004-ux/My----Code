#include <iostream>
using namespace std;
int main(){
    int arr[] = {6,3,9,7,9};
    cout << sizeof(arr) << endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i=0;i<n;i++){
        sum += arr[i];
    } 
    cout << "The Sum is : " << sum ;
    return 0;

}