//Smallest positive missing number

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[n];
    cin>>n;

    int N=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        N=max(a[i],N);

    }
    bool b[N];
    for(int i=0;i<=N;i++){
        b[i]=false;
    }

    for(int i=0;i<n;i++){
        if(a[i]>=0 && a[i]<=N){
            b[a[i]]=true;
        }
        else{
            continue;
        }
    }

    for(int i=0;i<=N;i++){
        if(b[i]==false){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
