//Bubble sort

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100],n,key;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        for(int k=0;k<n-i-1;k++){


            if(a[k]>a[k+1]){
              swap(a[k],a[k+1]);

            }

        }


    }
     for(int i=0;i<n;i++){
        cout<<a[i]<<endl;

    }


}
