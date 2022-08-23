//wap to find largest element in array.

#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        int maxi=INT_MIN;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
           maxi=max(maxi,a[i]);
        }
        cout<<maxi;
        return 0;
}
