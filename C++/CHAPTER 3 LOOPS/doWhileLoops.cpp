#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter your Number :";
    cin >> n;
    do
    { 
        int  i;
        sum += i;
        n--;
        /* code */
    } while (n>0);
    cout << sum << endl;
    return 0;
    
}