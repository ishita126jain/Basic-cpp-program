//Check weather number is prime or not.


#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i=2;
    cout<<"Enter any number"<<endl;
    cin>>a;
    for(i=2;i<a;i++){
        if(a%i==0){
            cout<<"No"<<endl;
            break;
        }

    }
     if(i==a){
        cout<<"Yes"<<endl;
    }

}
