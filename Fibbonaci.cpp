// fibbonaci of a number

#include<bits/stdc++.h>
using namespace std;
void fibbonaci(int n){
    int a=0;
    int b=1;
    cout<<"0"<<endl<<"1"<<endl;
   for(int i=1;i<=n-2;i++){
    int c= a+b;
    a=b;
    b=c;
    cout<<c<<endl;
   }



}
int main(){
    int n;
    cin>>n;

    fibbonaci(n);
}
