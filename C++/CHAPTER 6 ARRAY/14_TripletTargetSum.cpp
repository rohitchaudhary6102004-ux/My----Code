#include <iostream>
using namespace std;
int main(){
    int arr[] = {3,4,5,6,7,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int y;
    cout << "Enter the target Sum Value : " ;
    cin >> y;
    int  count = 0;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if((arr[i] + arr[j] + arr[k]) == y){
                count++;
            }
            }
            
        }
    }
    cout << endl << "No of Triplet Pairs are : " << count;

    return 0;

}