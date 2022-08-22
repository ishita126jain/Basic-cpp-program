//first repeating element.

#include<bits/stdc++.h>
using namespace std;
/* Bruteforce Approach
int main(){   //4 5 6 7 8 5 7
    int n,i;
    cin>>n;

    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (a[j]==a[i]){
                cout<<i<<endl;
                return 0;
            }
        }

    }
    cout<<"-1";
    return 0;

}
*/

/*optimized*/

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N=1e6+2;
    int idx[N];
    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[a[i]]!= -1){
            minidx=min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }
    return 0;
}
