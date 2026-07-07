#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,3,5,7,6,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = -1;
    int secondMax = -1;
    int index = -1;
    cout << "Value of Int Min : " << max << endl;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }
    cout << "The index of Largest Element : " << index << " and the Largest Element is : "<< max  << endl;
    arr[index] = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > secondMax && arr[i] != max){
            secondMax = arr[i];
        }
    }
    cout << "The Second Largest Element is : " << secondMax << endl;
    return 0;

}