#include <iostream>
using namespace std;
int main(){
    int arr[] = {6,3,9,7,9,4,2,8,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    // for loop
     cout << "Number of Issu : ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Number of Issu : ";

    // for each loop
    for(int ele:arr){
        cout << ele << " ";
    }
    cout << endl;

    // while loop
    int i = 0;
    while (i<n){
        cout << arr[i] << endl;
        i++;
    }

}