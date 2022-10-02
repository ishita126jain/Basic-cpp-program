//binary search

#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[],int n,int key){
    int mid;
    int s,e;
    s=0;
    e=n;
   while(s<=e){
      mid= (s+e)/2;
      if(a[mid]==key){
        return mid;
      }
      else if(a[mid]<key){
        s=mid+1;
      }
      else{
        e=mid-1;
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
    cout<<endl<<binary_search(a,n,key)<<endl;
}
