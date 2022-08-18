//print all the numbers between 1 to 100 except the number divisible by 3

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0){
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }
}
