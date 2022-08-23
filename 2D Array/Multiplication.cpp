//Matrix multiplication

#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    int a1[r1][c1],a2[r2][c2],a3[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a1[i][j];
        }
    }

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>a2[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            a3[i][j]=0;
        }
    }


    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                a3[i][j]+=a1[i][k]*a2[k][j];
            }
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<a3[i][j]<<" ";
        }
        cout<<endl;
    }




}
