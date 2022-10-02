// find out longest  arithmetic subarray of the given array.(GOOGLE kick start)

#include<bits/stdc++.h>
using namespace std;

/*void subarray(int a[],int n){
    int count ,maxcount=0,i,j,l,k;
   for( i=0;i<n;i++){
      for( j=i;j<n;j++){
            count=0;
        for( k=j;k>=i;k--){
             l=k-1;
            if(a[k]-a[l]==a[l]-a[l-1] && l>=0){
                count = count+1;
            }
        }
      if(count>maxcount){
        maxcount=count;      }
      }
    }
    if(i==n){
    cout<<"length of longest arithmetic subarray is : "<<maxcount+2;
    }
    else{
     cout<<"length of longest arithmetic subarray is : "<<maxcount;
    }
}

int main(){
    int n,a[100];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    subarray(a,n);
}*/

int main(){
    int n,a[100];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd=a[1]-a[0];
    int curr=2;
    int ans=2;
    int j=2;
    while(j<n){
        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }

    cout<<ans;
}
