// selection sort

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100],n,key;
    cin>>n;

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
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

}
