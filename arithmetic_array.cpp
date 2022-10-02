//find if array is arithmetic array or not.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[100],i,j;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=n-1;i>=0;i--){
         j=i-1;
        if(a[i]-a[j]!= a[j]-a[j-1] && j>=0){
           break;
        }

    }
    if(j==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
