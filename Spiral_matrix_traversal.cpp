//Spiral order matrix traversal

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
    int top,bottom,right,left;
    top=0;
    bottom=r-1;
    right=c-1;
    left=0;
    while(left<=right && top<=bottom){
    for(int i=left;i<=right;i++){
        cout<<a[top][i]<<" ";
    }
    top++;
    for(int i=top;i<=bottom;i++){
      cout<<a[i][right]<<" ";
    }
    right--;
    for(int i=right;i>=left;i--){
        cout<<a[bottom][i]<<" ";
    }
    bottom--;
    for(int i=bottom;i>=top;i--){
        cout<<a[i][left]<<" ";
    }
    left++;
    }
}
