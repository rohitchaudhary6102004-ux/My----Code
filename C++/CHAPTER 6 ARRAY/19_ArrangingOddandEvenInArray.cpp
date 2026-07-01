// Move all the inetegers at the beginnning of the array followed by the all odd integers 

#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,6,7,8,9,10,11,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left_ptr = 0;
    int right_ptr = n-1;

    while(left_ptr < right_ptr){
        if( (arr[left_ptr] % 2) == 1 && (arr[right_ptr] % 2) == 0){
            int b = arr[left_ptr];
            arr[left_ptr] = arr[right_ptr];
            arr[right_ptr] = b;
            left_ptr++;
            right_ptr--;
        }
        if( (arr[left_ptr] % 2) == 0){
            left_ptr ++;
        }
        if( (arr[right_ptr] % 2) == 1){
            right_ptr --;
        }
    }
    cout << "Result by Two ptr " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}