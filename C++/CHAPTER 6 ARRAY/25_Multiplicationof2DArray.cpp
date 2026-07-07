#include <iostream> 
using namespace std;
int main(){
    int r1, c1, r2, c2;
    cout << "Enter the r1 : ";
    cin >> r1;
    cout << "Enter the c1 : ";
    cin >> c1;
    cout << "Enter the r2 : ";
    cin >> r2;
    cout << "Enter the c2 : ";
    cin >> c2;
    int A[r1][c1];
    int B[r2][c2];
    cout << "Enter the Elements of Matrix A"<< endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin >> A[i][j];
        }
        cout << endl;
    }
     cout << "Enter the Elements of Matrix B"<< endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin >> B[i][j];
        }
         cout << endl;
    }
    cout << "Matrix A is : " << endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout << A[i][j] << " ";
        }
         cout << endl;
    }
    cout << "Matrix B is : " << endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout << B[i][j] << " ";
        }
         cout << endl;
    }
    // matrix multiplication
    int C[r1][c2];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j] = 0;
            for(int k=0;k<c1;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
         cout << endl;
    }
    cout << "Matrix Multiplication is : " << endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}