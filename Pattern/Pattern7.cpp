//Floyd's traingle
/*
1
2 3
4 5 6
7 8 9 10
1112131415
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
