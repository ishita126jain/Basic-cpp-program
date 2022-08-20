//pythogorian triplet

#include<bits/stdc++.h>
using namespace std;

bool pythogorian_triplet(int a,int b,int c){
    int maxi;
    maxi=max(a,(max(b,c)));
    int maxs=maxi*maxi;
    if(maxi==a){

    int bs=b*b;
    int cs=c*c;
    if(maxs==(bs+cs))
    {
        return true;
    }
    else{
        return false;
    }
    }

    if(maxi==b){

    int as=a*a;
    int cs=c*c;
    if(maxs==(as+cs))
    {
        return true;
    }
    else{
        return false;
    }
    }

    if(maxi==c){

    int bs=b*b;
    int as=a*a;
    if(maxs==(bs+as))
    {
        return true;
    }
    else{
        return false;
    }
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<pythogorian_triplet(a,b,c);
}
