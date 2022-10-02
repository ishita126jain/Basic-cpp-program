// find the maximum sum of subarray

#include<bits/stdc++.h>
using namespace std;

/*
Bruteforce method  TC=n3
int main(){
    int n,sum,maxi=INT_MIN;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+a[k];
            }

        }
        maxi=max(sum,maxi);

    }
    cout<<maxi;
}
*/

//Cummulative Sum Approach TC=n2

/*
int main(){
    int n;
    cin>>n;
    int sum;
    int maxSum=INT_MIN;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cum[n+1];
    cum[0]=0;
    for(int i=1;i<n;i++){
        cum[i]=cum[i-1]+a[i-1];
    }

    for(int i=1;i<=n;i++){
            sum=0;
        for(int j=0;j<i;j++){
            sum=cum[i]-cum[j];
            maxSum = max(maxSum,sum);
        }
    }
    cout<<maxSum;
}
*/

//Kadane's algorithm
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxSum=INT_MIN;
    int sum=0;

    for(int i=0;i<n;i++){
        if(sum<0){
            sum=0;
        }
        sum=sum+a[i];
        maxSum=max(maxSum,sum);
    }
    cout<<maxSum;
}

