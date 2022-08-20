//calculate nCr = n!/(n-r)! * r!

#include<bits/stdc++.h>
using namespace std;

int factorial(int a){
    int ans=1;
    for(int i=1;i<=a;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
int n,r,x;
cin>>n>>r;
 x=n-r;
int N=factorial(n);
int R=factorial(r);
int X=factorial(x);
int ans=N/(X*R);
cout<<ans<<endl;

}
