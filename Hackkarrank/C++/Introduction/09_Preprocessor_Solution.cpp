//
// Created by ghost on 7/14/16.
//

//*******************************************************************************
// This is the lines I made
//#include <algorithm>
#define toStr(x) #x
#define foreach(v,i) for(int i=0;i<n;i++)
#define io(v) cin>>v
#define minimum(x,y) if(x>y)x=y;
#define maximum(x,y) if(x<y)x=y;
#define INF 0
#define FUNCTION(x,y)
//  After form here is the original code
//*******************************************************************************


#include <iostream>
#include <vector>

using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
    int n; cin >> n;
    vector<int> v((unsigned long) n);
    foreach(v, i) {
        io(v)[i];
    }
    int mn = INF;
    int mx = -INF;
    foreach(v, i) {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) <<' '<< ans;
    return 0;

}