#include <iostream>
using namespace std;
int main(){
    int x;
    cout<< "Enter the no of elements you want to take in Array : ";
    cin >> x;
    int arr[x];
    int sum = 0;
    for(int i=0;i<x;i++){
        cin >> arr[i];
    }
    for(int i=0;i<x;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i=0;i<x;i++){
        if(i%2 == 0){
            sum += arr[i];
        }else{
            sum -= arr[i];
        }
    }
    cout << "Differences of Sum of odd indices and even indices : " << sum;
    return 0;

}