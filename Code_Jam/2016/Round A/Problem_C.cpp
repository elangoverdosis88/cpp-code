//
// Created by pgsamila.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
//INPUTS
    int T;
    cin >>T;
    int i,N[T],j,F[T][1000],k,x,y,z,a,G[T][1000],b,c,ans[T][1000];
    for(i=0;i<T;i++){
        cin >> N[i];
        for(j=0;j<N[i];j++){
            cin >> F[i][j];
        }

    }

    for(i=0;i<T;i++){

        for(j=0;j<N[i];j++){
            G[i][j]=F[i][j];
        }

    }

// Process and OUTPUT

    for(x=0;x<T;x++){
        for(b=0;b<N[x];b++){
            for(c=0;c<N[x];c++){
                F[x][c]=G[x][c];
            }

            y=0;
            i=F[x][b];
            //F[x][0]=0;
            while(true){
                if(F[x][i-1]>0){
                    z=i;
                    k=F[x][i-1];
                    F[x][i-1]=0;
                    i=k;
                    if(i-1==b){
                        //y++;
                    } else {
                        y++;
                    }
                }
                else  {
                    a=0;
                    while(true){
                        a++;
                        if(z==F[x][a-1]){
                            if(a-1==b){

                                break;
                            } else {

                                y++;
                                break;
                            }
                        }else if (a>N[x]){
                            //y++;
                            break;
                        }else { }
                    }
                    break;

                }
            }
            ans[x][b]=y;
        }

        for(i=0;i<T;i++){
            for(j=0;j<N[i];j++){
                for(k=j+1;k<N[i];k++){
                    if(ans[i][j]<ans[i][k]){
                        ans[i][j]=ans[i][k];
                    }
                }
            }
        }
        for(x=0;x<T;x++){
            cout<< "Case #"<< x+1<<": "<<ans[x][0]<<endl;
        }

    }

}
