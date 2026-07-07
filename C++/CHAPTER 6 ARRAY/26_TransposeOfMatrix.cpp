#include <iostream>
using namespace std;
int main(){
    int m, n;
    cout << "Enter the Rows : "; cin >> m;
    cout << "Enter the Columns : "; cin >> n;
    int A[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> A[i][j];
        }
    }
    cout << "Matrix A is : " << endl;
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    // Transpose of Matrix
    cout << "Transpose of the Matrix is : " << endl;
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}