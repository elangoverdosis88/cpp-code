//
// Created by ghost on 7/15/16.
//

#include <iostream>

using namespace std;

int main(){
    int N,Q,i,j,k;
    cin >> N >> Q;

    int** S=new int* [N];

    for(i=0;i<N;i++){
        //int a;
        cin >> k;
        int* b=new int [k];
        for(j=0;j<k;j++){
            cin >> b[j];
        }
        *(S+i)=b;
    }

    for(i=0;i<Q;i++){
        int p,r;
        cin >> p >>r;
        cout << S[p][r] << endl;
    }

    return 0;
}