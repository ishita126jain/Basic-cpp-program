// Write a C++ program to find the most occurring element in an array of integers.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int count=0,maxCount=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
            count=0;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
    maxCount=max(count,maxCount);

    }

   for(int i=0;i<n;i++){
            count=0;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
   if(count==maxCount){
    cout<<a[i]<<endl;
   }

    }
    return 0;
}
