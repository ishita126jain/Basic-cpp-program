//decimal to octal

#include<bits/stdc++.h>
using namespace std;

void decimal_to_octal(int num){
    int b[100];
    int i=0;
    while(num!=0){
        b[i]=num%8;
        num=num/8;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<b[j];
    }
}
int main(){
    int num;
    cin>>num;
    decimal_to_octal(num);
}
