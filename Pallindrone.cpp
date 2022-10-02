//the given number is pallindrone or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,temp,ans=0,x;
    cin>>num;
    x=num;
   while(num!=0){
        temp=num%10;
        ans=temp+ans*10;
        num=num/10;
    }
    if(x==ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}
