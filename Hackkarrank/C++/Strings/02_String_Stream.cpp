//
// Created by ghost on 7/15/16.
//

/*
 * stringstream ss("23,4,56");
 * char ch;
 * int a, b, c;
 * ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
 */

//#include <iostream>
#include <string>
//#include <sstream>
//#include <vector>

using namespace std;

int main() {
    vector<int> v;
    string s;
    cin >> s;
    string k;
    for (int i=0;i<s.size();i++){

        if(s[i] == (char) ","){
        } else{
            k="";
            while (s[i]!= (char) ","){
                k=k+s[i];
                i+=1;
            }
            v.push_back(atoi(k.c_str()));
        }
    }

    for (int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    return 0;
}




//************************************************************************
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
    vector<int> exe;
    string k;
    for(int i=0;i<str.size();i++){
        if(str[i]== (char) ','){

        } else{
            k="";
            while(str[i]!=(char) ','){
                if(i>str.size()){
                    break;
                }
                k=k+str[i];
                i+=1;
            }
            exe.push_back(atoi(k.c_str()));
        }
    }
    return exe;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
