//Record breaker

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0; //for a[0]
    int maxi=-1;
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){

           if(a[i]>maxi && a[i]>a[i+1]){
            count++;

           }
            maxi=max(maxi,a[i]);
    }
    cout<<count;
}
