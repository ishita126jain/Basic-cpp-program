//Write a C++ program to sort a given unsorted array of integers, in wave form

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
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i=i+2){
        swap(a[i],a[i+1]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
