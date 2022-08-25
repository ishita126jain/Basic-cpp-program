//Create an array of size 30 and ask user to enter string. Your program should print array in reverseorder

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n],rev[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--){
        rev[n-1-i]=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<rev[i];
    }
}
