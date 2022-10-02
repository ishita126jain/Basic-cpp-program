// Pascal traingle
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/

#include<bits/stdc++.h>
using namespace std;

int factorial(int a){
    int ans=1;
    for(int i=1;i<=a;i++){
        ans=ans*i;
    }
    return ans;
}

int combination(int n,int r){
    int x=n-r;
    int N=factorial(n);
    int R=factorial(r);
    int X=factorial(x);
    int ans=N/(X*R);
    return ans;
}
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
            for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){

                   cout<<combination(i,j)<<" ";


        }

        cout<<endl;
    }
}
