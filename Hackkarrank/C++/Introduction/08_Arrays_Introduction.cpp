//
// Created by ghost on 7/14/16.
//

#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=1;i<=N;i++){
        cout << A[N-i] << " ";
    }
    cout << endl;
}