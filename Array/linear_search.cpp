// linear search

#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[100],n,key;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cin>>key;
    cout<<endl<<linear_search(a,n,key)<<endl;
}
