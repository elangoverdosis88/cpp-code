//
// Created by ghost on 7/14/16.
//

#include <iostream>

using namespace std;

int show_grater(int a, int b, int c, int d){
    if(a>=b && a>=c && a>=d){
    } else if(b>=a && b>=c && b>=d){
        a=b;
    } else if(c>=a && c>=d && c>=a){
        a=c;
    } else if(d>=a && d>=b && d>=a){
        a=d;
    }
    return a;
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
//    a=show_grater(a,b,c,d);
    cout << show_grater(a,b,c,d) << endl;
    return 0;
}

