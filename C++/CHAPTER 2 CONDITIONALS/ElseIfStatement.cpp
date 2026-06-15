#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;
    if(marks >= 80){
        cout << "A Grade ";
    }
    else if(marks <80 && marks >=40){
        cout <<"Average to Good";
    }else{
        cout << "Poor performance";
    }
}