#include <iostream>
using namespace std;
int main(){
    int m, n;
    cout << "Enter no of Rows :";
    cin >> m;
    cout << "Enter no of Columns :";
    cin >> n;
    for(int i=1;i<=m;i++){
       for(int j=1;j<=n;j++){
        cout << "❤️ ";
    }
    cout << endl;
}
}