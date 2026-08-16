#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    cout << "Size of Array : " << sizeof(arr) << endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "No of Elements present in array are : " << n << endl;
    bool state = true;
    for(int i=0;i<n-1;i++){
        if(!(arr[i] < arr[i+1])){
            state = false;
            break;
        }
    }
    if(state == 1){
        cout << "Array is Sorted";
    }else{
        cout << "Array is  not Sorted";
    }




    return 0;
}