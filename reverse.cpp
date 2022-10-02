//Reverse the given number

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,temp,ans=0;
    cin>>num;

   while(num!=0){
        temp=num%10;
        ans=temp+ans*10;
        num=num/10;
    }
    cout<<ans<<endl;
}
