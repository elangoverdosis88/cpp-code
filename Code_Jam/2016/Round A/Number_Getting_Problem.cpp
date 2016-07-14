//
// Created by pgsamila.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int T,i,k,j, z0,z1,z2,z3,z4,z5,z6,z7,z8,z9,a;
    cin >> T;

    string S[T];

    for(i=0;i<T;i++){
        cin >> S[i];
    }

    for (i=0;i<T;i++){
        k=S[i].length();
        z0=0;
        z1=0;
        z2=0;z3=0;z4=0;z5=0;z6=0;z7=0;z8=0;z9=0;
        cout << "Case #" << i+1 <<": ";
        for (j=0;j<k;j++){
            if(S[i][j]=='Z'){
                a=0;
                z0+=1;
                S[i][j]='L';
                while(true){
                    if(S[i][a]=='E'){
                        S[i][a] = 'L';
                        break;

                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='R'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='O'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
            }
        }

        for(j=0;j<k;j++){
            if(S[i][j]=='W'){
                z2+=1;
                a=0;
                S[i][j]='L';
                while(true){
                    if(S[i][a]=='T'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='O'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
            }
        }

// 444444444444444444444444444

        for(j=0;j<k;j++){
            if(S[i][j]=='U'){
                z4+=1;
                a=0;
                S[i][j]='L';
                while(true){
                    if(S[i][a]=='F'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='O'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='R'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
            }
        }

// 66666666666666666666666

        for(j=0;j<k;j++){
            if(S[i][j]=='X'){
                z6+=1;
                a=0;
                S[i][j]='L';;


                while(true){
                    if(S[i][a]='S'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='I'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
            }
        }


// 88888888888888888888

        for(j=0;j<k;j++){
            if(S[i][j]=='G'){
                z8+=1;
                a=0;
                S[i][j]='L';;


                while(true){
                    if(S[i][a]=='E'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='I'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='H'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='T'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
            }
        }


// 11111111111111111111111111111

        for(j=0;j<k;j++){
            if(S[i][j]=='O'){
                z1+=1;
                a=0;
                S[i][j]='L';;


                while(true){
                    if(S[i][a]=='N'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='E'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
            }
        }

//  3333333333333333333333333333
        for(j=0;j<k;j++){
            if(S[i][j]=='R'){
                z3+=1;
                a=0;
                S[i][j]='L';;


                while(true){
                    if(S[i][a]=='E'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='E'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='H'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='T'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
            }}


        // 555555555555555555555

        for (j=0;j<k;j++){
            if(S[i][j]=='F'){
                a=0;
                z5+=1;
                S[i][j]='L';
                while(true){
                    if(S[i][a]=='I'){
                        S[i][a] = 'L';
                        break;

                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='V'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='E'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
            }
        }
        // 9999999999999999999999
        for (j=0;j<k;j++){
            if(S[i][j]=='I'){
                a=0;
                z9+=1;
                S[i][j]='L';;
                while(true){
                    if(S[i][a]=='N'){
                        S[i][a] = 'L';
                        break;

                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='N'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='E'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
            }
        }

        //   77777777777777777777777777777

        for(j=0;j<k;j++){
            if(S[i][j]=='V'){
                z7+=1;
                a=0;
                S[i][j]='L';;


                while(true){
                    if(S[i][a]=='E'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='S'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='E'){
                        S[i][a] = 'L';
                        break;
                    }
                    a+=1;
                }
                a=0;
                while(true){
                    if(S[i][a]=='N'){
                        S[i][a] = 'L' ;
                        break;
                    }
                    a+=1;
                }
                a=0;
            }
        }




        cout << "Case #" << i+1 <<": ";

        for(j=0;j<z0;j++){

            cout<< 0;

        }
        for(j=0;j<z1;j++){

            cout<< 1;

        }
        for(j=0;j<z2;j++){

            cout<< 2;

        }
        for(j=0;j<z3;j++){

            cout<< 3;

        }
        for(j=0;j<z4;j++){

            cout<< 4;

        }
        for(j=0;j<z5;j++){


            cout<< 5;

        }
        for(j=0;j<z6;j++){

            cout<< 6;

        }
        for(j=0;j<z7;j++){
            cout<< 7;

        }
        for(j=0;j<z8;j++){
            cout<<8;
        }
        for(j=0;j<z9;j++){
            cout<< 9;
        }
        cout<< '\n';


    }
}



