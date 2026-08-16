#include <iostream>
using namespace std;
int main(){
    char vowels[5];

    // use of for loop
    for(int i=0;i<5;i++){
        cin >> vowels[i];
    }
    for(int i=0;i<5;i++){
        cout << vowels[i];
        cout << " ";
    }
    //  use of for each loop
    for(char element:vowels){
        cin >> element;
    }
    for(int j=0;j<5;j++){
        cout << vowels[j] << " ";
    }
}