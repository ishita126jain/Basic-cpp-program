//max till i

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,maxi=INT_MIN;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
     maxi=max(maxi,arr[i]);
   cout<<maxi<<endl;
    }
}
