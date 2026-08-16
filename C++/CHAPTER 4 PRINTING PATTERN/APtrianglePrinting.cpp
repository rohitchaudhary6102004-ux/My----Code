#include <iostream>
using namespace std;
int main(){
    int m, n;
    cout << "Enter no of Rows :";
    cin >> m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=(2*i-1);j++){
            cout << "* ";
        }
        cout << endl;
    }
}