//circular maximum sum of array.

#include<bits/stdc++.h>
using namespace std;

int kadanes(int n,int a[]){

    int maxSum=INT_MIN;
    int sum=0;

    for(int i=0;i<n;i++){
        if(sum<0){
            sum=0;
        }
        sum=sum+a[i];
        maxSum=max(maxSum,sum);
    }
    return maxSum;
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxSum;
    int nowrapsum,wrapsum;
    int sum=0;
    nowrapsum=kadanes(n,a);

     for(int i=0;i<n;i++){
        sum=sum+a[i];
        a[i]= -a[i];
     }
     int notcontaining=kadanes(n,a);
     wrapsum = sum + notcontaining;

     maxSum=max(wrapsum,nowrapsum);
     cout<<maxSum;
}
