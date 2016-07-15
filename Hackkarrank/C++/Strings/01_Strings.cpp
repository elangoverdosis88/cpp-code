//
// Created by ghost on 7/15/16.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string a,b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;

    cout << a+b << endl;

    for (int i=0;i<a.size();i++){
        if(i==0){
            cout << b[i];
        } else{
            cout << a[i];
        }
    }
    cout << " ";
    for (int i=0;i<b.size();i++){
        if(i==0){
            cout << a[i];
        } else{
            cout << b[i];
        }
    }
    cout << endl;

    return 0;
}