/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    int count=1;
    for(int k=1;k<=i;k++){
            cout<<count<<" ";
            count++;

    }
    cout<<endl;
   }

}
