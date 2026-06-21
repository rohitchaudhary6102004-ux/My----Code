#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int arr[] = {6,3,9,7,9,12,5,6,1,14,13,15,9,-1,-4,-5};
    cout << "Size of Array : " << sizeof(arr) << endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "No of Elements present in array are : " << n << endl;
    int x;
    cout << "Enter the number you want to search : ";
    cin >> x;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > x){
            count++;
        }
    }
    cout << "No of Element Greater than X are : " << count;
}