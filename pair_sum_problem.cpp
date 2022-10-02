//pair sum problem

#include<bits/stdc++.h>
using namespace std;
/*
Bruteforce apporoach

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
            int sum=0;
        for(int j=i+1;j<n;j++){
            sum=a[i]+a[j];
            if(sum==k){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
*/

//optimised solution

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int low=0;
    int high=n-1;

    while(low<=high){
        if((a[low]+a[high])<k){
            low++;
        }
        else if(a[low]+a[high]>k){
            high--;
        }
        else{
            cout<<low<<" "<<high<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
