//hexadecimal to decimal

#include<bits/stdc++.h>
using namespace std;

int hexa_to_decimal(string s){
    int ans=0;
    int base=1;
    int len=s.size();
    for(int i=len-1;i>=0;i--){
        if(s[i]<='9' && s[i]>='0'){
            ans+=(int(s[i])-48)*base;
            base=base*16;
        }
        else if(s[i]>='A' && s[i]<='F'){
            ans+=(int(s[i])-55)*base;
            base=base*16;
        }

    }
    return ans;

}
int main(){
    string s;
    cin>>s;

   cout<<hexa_to_decimal(s);
}
