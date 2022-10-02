//the given number is armstrong or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,temp,ans=0,x,cube;
    cin>>num;
    x=num;
   while(num!=0){
        temp=num%10;
        cube=temp*temp*temp;
        ans=cube+ans;
        num=num/10;
    }
    if(x==ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}
