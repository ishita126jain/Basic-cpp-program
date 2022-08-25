//Check Pallindrome

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char name[n],temp[n];
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
    for(int i=n-1;i>=0;i--){
     temp[(n-1)-i]=name[i];
    }

    for(int i=0;i<n;i++){
        if(name[i]!=temp[i]){
            cout<<"Not pallindrome"<<endl;
            return 0;
        }
    }
    cout<<"Its a Pallindrome"<<endl;
    return 0;
}
