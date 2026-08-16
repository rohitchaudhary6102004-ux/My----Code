#include <iostream>
using namespace std;
int reference(int &b){
    b = 10;
    cout << "The address of B : " <<&b << endl;
    return b;
}
int main(){
    int a = 5;
    cout << &a << endl;
    reference(a);
    cout <<"New value of a : " << a;
    return 0;
}