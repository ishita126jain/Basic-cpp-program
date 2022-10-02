//decimal to hexadecimal

#include<bits/stdc++.h>
using namespace std;

void decimal_to_hexadecimal(int num){
    char h[100];
    int i=0,temp=0;
    while(num!=0){
      temp=num%16;
      if(temp>=0 && temp<=9){
        h[i]=temp+48;
        i++;
      }
      else if(temp>=10 && temp<=15){
        h[i]=temp+55;
        i++;
      }
      num=num/16;
    }
    for(int j=i-1;j>=0;j--){
        cout<<h[j];
    }
}
int main(){
    int num;
    cin>>num;
    decimal_to_hexadecimal(num);
}
