// Taking input of 2D array

#include <iostream>
using namespace std;
int main(){
    int m, n;
    cout << "Enter no of Rows : "; cin >> m;
    cout << "Enter no of Columns : "; cin >> n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Resulted Array" << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}