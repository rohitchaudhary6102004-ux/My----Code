#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>> a;
    cin>> b;
    cout<<"Value of  a : "<< a <<endl;
    cout<< "Value of b : "<< b <<endl;
    c = b;
    b = a;
    a = c;
    cout<<"\nSwapped of a : "<< a <<endl;
    cout<<"Swapped of b : "<< b <<endl;
    return 0;
}