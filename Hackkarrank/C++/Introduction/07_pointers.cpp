//
// Created by ghost on 7/14/16.
//

#include <iostream>

using namespace std;

void update1(int *v, int *x){
    *v= *v + *x;
    if(*v-*x >= *x){
        *x=*v-*x-*x;
    } else{
        *x=*x-*v+*x;
    }
}

int main(){
    int p,q;
    cin >> p >> q;
    update1(&p,&q);
    cout <<p << endl <<q << endl;
    return 0;
}
