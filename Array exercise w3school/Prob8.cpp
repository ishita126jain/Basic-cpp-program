//Write a C++ program to find the next greater element of every element of a given array of integers. Ignore those elements which have no greater element

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                cout<<a[i]<<":"<<a[j]<<endl;
                break;
            }
        }
    }
}
