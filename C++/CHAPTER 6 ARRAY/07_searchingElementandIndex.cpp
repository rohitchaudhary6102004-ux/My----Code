#include <iostream>
using namespace std;
int main(){
    int arr[] = {6,3,9,7,9,12,5,6,1,14,13,15};
    cout << "Size of Array : " << sizeof(arr) << endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    bool state = false;
    cout << "Enter the number you want to search : ";
    cin >> x;
    int index = -1;
    for(int i=0;i<n;i++){
        if( x == arr[i]){
            state = true;
            index = i;
            break;
        }
    }
    if(state == 1){
        cout << "Element is Found at Index of : " << index;
    }
    else{
        cout << "Element does not found";
    }
    return 0;

}