//Write a C++ program to find all elements in array of integers which have at-least two greater elements.

#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<n-2;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}*/

int main(){
    int n;
    cin>>n;
    int a[n];
    int count;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
             count=0;
        for(int j=0;j<n;j++){
            if(a[i]<a[j]){
                count++;
            }
        }
        if(count>=2){
                cout<<a[i]<<" ";
            }
    }
    return 0;
}
