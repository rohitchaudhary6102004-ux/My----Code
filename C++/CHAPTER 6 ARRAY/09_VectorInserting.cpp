#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity()<< endl;

    v.push_back(2);
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(4);
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.insert(v.begin()+2, 5);
    cout << endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.erase(v.begin()+1);
    cout << endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

}
