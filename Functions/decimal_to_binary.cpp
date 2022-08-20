//decimal to binary

#include<bits/stdc++.h>
using namespace std;

void decimal_to_binary(int num){
    int b[100];
    int i=0;
    while(num!=0){
        b[i]=num%2;
        num=num/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<b[j];
    }
}
int main(){
    int num;
    cin>>num;
    decimal_to_binary(num);
}
