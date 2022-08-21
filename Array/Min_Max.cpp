//find min and max element in array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini=a[0];
    int maxi=a[0];

    for(int i=0;i<n;i++){
        if(maxi<a[i]){
            maxi=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(mini>a[i]){
            mini=a[i];
        }
    }
    cout<<mini<<endl;
    cout<<maxi<<endl;
}
