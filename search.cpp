//search a element in matrix and print its coordinates.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;

    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    int k;
    cin>>k;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==k){
                cout<<i<<" "<<j;
            }
        }
    }
    return 0;
}
