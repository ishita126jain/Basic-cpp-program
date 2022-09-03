//given n string and q queries in each query you are given a string print frequency of that data.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    unordered_map<string,int> m;
    for(int i=0;i<n;i++){
      cin>>s;
      m[s]++;
    }
    int q;
    cin>>q;
    while(q--){
      string s;
      cin>>s;
      cout<<m[s]<<endl;
    }
}
