//Print all the prime number between any given range.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,j=2;
    cout<<"Enter the range of numbers"<<endl;
    cin>>a>>b;
    for(i=a;i<=b;i++){
            for(j=2;j<i;j++){
                if(i%j==0){
                    break;
                }
            }
            if(j==i){
                cout<<i<<endl;
            }


    }
}
