//
// Created by ghost on 7/15/16.
//

/*
  vector<int>v; (creates an empty vector of integers)
  int size=v.size();
  v.push_back(x);(where x is an integer.The size increases by 1 after this.)
  v.pop_back(); (After this the size decreases by 1)
  sort(v.begin(),v.end()); (Will sort all the elements in the vector) */


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int N;
    cin >> N;
    int a;
    for(int i=0;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<N;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

