// sort an  array containing 0 and  1's and arrange all the 0's at left side of the array and all 1's at the right side of the array 

#include <iostream> 
using namespace std;
int main(){
    int arr[] = {1,1,0,0,1,1,0,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for (int i=0;i<n;i++){
        if(arr[i] == 0){
            count++;
        }
    }
    cout<< "The no of Zeroes in array are : " << count;

    for(int i=0;i<n;i++){
        if(i  < count){
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
    }
     cout << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    // By using Two Pointers
    cout << endl << endl << endl;

    int left_ptr = 0;
    int right_ptr = n-1;

    while(left_ptr < right_ptr){
        if( arr[left_ptr] == 1 && arr[right_ptr] == 0){
            arr[left_ptr] = 0;
            arr[right_ptr] = 1;
            left_ptr++;
            right_ptr--;
        }
        if( arr[left_ptr] == 0){
            left_ptr ++;
        }
        if( arr[right_ptr] == 1){
            right_ptr --;
        }
    }
    cout << "Result by Two ptr " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}