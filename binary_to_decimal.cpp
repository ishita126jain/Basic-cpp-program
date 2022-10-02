//binary to decimal

#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(int num){
    int temp,base=1,ans=0;
    while(num!=0){
        temp=num%10;
         ans=ans+temp*base;
        num=num/10;
        base=base*2;
    }
    return ans;

}

int main(){
    int num;
    cin>>num;

    cout<<binary_to_decimal(num);
}
